#include<iostream>
using namespace std;


class Employee{
	int id;
	char name[100];
public:
	Employee(char * n,int i){
		id = i;
		strcpy(name,n);
	}
	friend class Printer;
};

class Printer{
public:
	void Print(Employee e){
		cout << e.id <<" " << e.name <<endl;
	}
};

int main(){
	char a[100] = "abc";
	Employee e(a,12);
	Printer p;
	p.Print(e);
	return 0;
}