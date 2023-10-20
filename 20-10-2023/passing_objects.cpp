#include<iostream>
using namespace std;

class Employee{
public:
	int id;
	Employee(int i){
		id = i;
	}
	void display(){
		cout << "id: " << id <<endl;
	}
};

void change1(Employee e){ 
	e.id = 100;
}

void change2(Employee &e){
	e.id = 200;
}

void change3(Employee *e){
	(*e).id = 300;
}

int main(){
	Employee e(1);
	change1(e);
	e.display();
	change2(e);
	e.display();
	change3(&e);
	e.display();
}