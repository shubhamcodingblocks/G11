#include<iostream>
using namespace std;

class Student{
public:
	char name[100];
	int roll_no;
	static int ct;
	void set(char *n,int r){
		ct++;
		strcpy(name,n);
		roll_no = r;
	}
	int get_roll_no(){
		return roll_no;
	}
	char * get_name(){
		return name;
	}
};

int Student::ct;

int main(){
	Student s1,s2;
	char a[] = "abc";
	s1.set(a,123);
	s2.set(a,234);
	cout<< s1.get_name() <<endl;
	cout<< s1.get_roll_no() <<endl;
	cout<< Student::ct <<endl;
	return 0;
}