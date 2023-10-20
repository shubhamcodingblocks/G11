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
		void display() const{
			// id = 12; -> this will throw an error because we cannot change the value of data members
			// inside a constant member function
			cout << "name: " << name <<endl;
			cout << "id: " << id <<endl;
		}
};

int main(){
	char a[100] = "abc";
	Employee e(a,123);
	e.display();
	return 0;
}