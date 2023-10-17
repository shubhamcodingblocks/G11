#include<iostream>
#include<cstring>
using namespace std;

class Dog{
private:
	char name[100];
	char specie[100];
	int age;
public:
	Dog(char *n,char *s,int a){
		strcpy(name,n);
		strcpy(specie,s);
		age = a;
	}
	void display(){
		cout<< "name: "<<name<<endl;
		cout<< "specie: "<<specie<<endl;
		cout<< "age: "<<age<<endl;
	}
};

int main(){
	Dog d("abc","def",12);
	d.display();
	return 0;
}