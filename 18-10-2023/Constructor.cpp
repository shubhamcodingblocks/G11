#include<iostream>
#include<cstring>
using namespace std;

class Student{
	public:
	char name[100];
	int roll_no;
	static int ct;
	Student(char* ,int );
	// void set(char *n,int r){
	// 	strcpy(name,n);
	// 	roll_no = r;
	// }
	static void display();
};

int Student::ct;

Student::Student(char* n,int r){
	ct++;
	strcpy(name,n);
	roll_no = r;
}

void Student::display(){
	cout<< ct <<endl;
}

int main(){
	// char a[100] = "abc";
	// Student s(a,123);
	// Student s1(a,234);
	// s.display();
	cout<< Student::ct <<endl;
	return 0;
}