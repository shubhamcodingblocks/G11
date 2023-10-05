#include<iostream>
#include<cstring>
using namespace std;

class Student{
private:
	char name[100];
	int roll_no;
public:
	void set(char *,int);
	int get_roll_no();
	char * get_name();
};

void Student::set(char *n, int r){
	strcpy(name,n);
	roll_no = r;
}

int Student::get_roll_no(){
	return roll_no;
}

char * Student::get_name(){
	return name;
}


int main(){
	Student s1;
	char b[100] = "abcdef";
	s1.set(b,1234);
	cout<<s1.get_name()<<" "<<s1.get_roll_no()<<endl;
	return 0;
}