#include<iostream>
#include<cstring>
using namespace std;

class Employee{
public:
	char name[100];
	int age;
	Employee(char *n,int a){ // constructor
		strcpy(name,n);
		age = a;
	}
	void display(){
		cout<< "name: " << name <<endl;
		cout<< "age: " << age << endl;
	}
	~Employee(){ // destructor
		cout<< "destructor is called "<<endl;
	}
};

int main(){
	if(true){
		char a[100] = "abc";
		Employee e(a,123);
		e.display();
	}
	cout<< "outside if "<<endl;
	return 0;
}