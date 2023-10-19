#include<iostream>
#include<cstring>
using namespace std;

class Employee{
private:
	char name[100];
	int age;
public:
	Employee(char *n,int a){ // constructor
		strcpy(name,n);
		age = a;
	}
	friend void display(Employee);
};

void display(Employee e){
	cout << e.name << " " << e.age <<endl;
}

int main(){
	char a[100] = "abc";
	Employee e(a,12);
	display(e);
	return 0;
}