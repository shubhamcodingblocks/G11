#include<iostream>
using namespace std;

class Car{
public:
	char * name;
	int mileage;
	int price;
	int seats;

	Car(){
		cout << "default constructor called. " <<endl;
		name = NULL;
		mileage = 0;
		price = 0;
		seats = 0;
	}

	Car(char *n,int m){
		cout << "constructor with 2 parameters called. " <<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		mileage = m;
		price = 0;
		seats = 0;
	}

	Car(char *n,int m,int p,int s){
		cout << "parameterised constructor called. " <<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		mileage = m;
		price = p;
		seats = s;
	}

	// Car(Car& X){     // deep copy
	// 	cout << "copy constructor called. " <<endl;
	// 	name = new char[strlen(X.name)+1];
	// 	strcpy(name,X.name);
	// 	mileage = X.mileage;
	// 	price = X.price;
	// 	seats = X.seats;
	// }

	// Car(Car &X){ // shallow copy ( compiler's way )
	// 	name = X.name;
	// 	mileage = X.mileage;
	// 	price = X.price;
	// 	seats = X.seats;
	// }

	void display(){
		cout << "name: " << name <<endl;
		cout << "mileage: " << mileage << endl;
		cout << "price: " << price <<endl;
		cout << "seats: " << seats <<endl;
		cout << endl;
	}
};

int main(){
	Car D("BMW",100,10,2);
	Car C = D; // copying D into C;
	Car E(C); // copying C into E;
	E.name[0] = 'Z';
	E.mileage=100;
	D.display();
	C.display();
	E.display();
	return 0;
}