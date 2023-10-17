#include<iostream>
#include<cstring>
using namespace std;


class Student{
	char name[100];
	int roll_no;
public:
	Student(char *n,int r){ // default constructor
		cout<< "constructor called";
		strcpy(name,n);
		roll_no = r;
	}
	// void set(char *n,int r){
	// 	strcpy(name,n);
	// 	roll_no = r;
	// }
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"roll no: "<<roll_no<<endl;
		cout<<endl;
	}
};

int main(){
	char a[100] = "abc";
	Student s(a,123);
	s.display();
	return 0;
}