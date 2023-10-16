#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	char name[100];
	int id;
	static int ct;
public:
	void set(char *n,int i){
		ct++;
		id = i;
		strcpy(name,n);
	}
	int get_id(){
		return id;
	}
	char * get_name(){
		return name;
	}
	static int get_count(){
		return ct;
	}
};

int Employee::ct = 0;

int main(){
	cout << Employee::get_count() <<endl; // accessing static method without creating any object
	return 0;
}