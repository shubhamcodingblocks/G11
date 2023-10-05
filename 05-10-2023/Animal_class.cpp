#include<iostream>
using namespace std;

class Animal{
private:
	char species[100];
	int age;
	char name[100];
public:
	void set(char*,int,char*);
	int get_age();
	char * get_species();
	char * get_name();
};

void Animal::set(char *s,int a,char* n){
	strcpy(species,s);
	age = a;
	strcpy(name,n);
}

char * Animal::get_name(){
	return name;
}

char * Animal::get_species(){
	return species;
}

int Animal::get_age(){
	return age;
}

int main(){
	Animal a;
	char species[] = "Pitbull";
	char name[] = "abcd";
	a.set(species,9,name);
	cout<<"name: "<<a.get_name()<<" species: "<<a.get_species()<<" age: "<<a.get_age()<<endl;
	return 0;
}