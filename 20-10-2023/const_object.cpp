#include<iostream>
using namespace std;

class Employee{
	public:
		int id;
		char name[100];
		Employee(char *n,int i){
			id = i;
			strcpy(name,n);
		}
		void display(){
			cout << "name: " << name <<endl;
			cout << "id: " << id <<endl;
		}
		void display1() const{
			cout << "name: " << name <<endl;
			cout << "id: " << id <<endl;		
		}
};

int main(){
	char a[100] = "abc";
	const Employee e(a,123);
	//e.display(); -> will throw an error because display is a non constant member function and hence
	// have a tendency to change the values of that object.
	e.display1(); // -> will not throw an error because we know that a contant member function
	// never changes the vallue of an object.
	return 0;
}