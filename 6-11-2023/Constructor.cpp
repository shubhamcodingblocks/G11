// Constructor overloading: constructor with different parameters called.

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

	void display(){
		cout << "name: " << name <<endl;
		cout << "mileage: " << mileage << endl;
		cout << "price: " << price <<endl;
		cout << "seats: " << seats <<endl;
		cout << endl;
	}
};

int main(){
	Car A("BMW",100,10,4);
	Car B("Benz",200);
	Car C;
	A.display();
	B.display();
	C.display();


	return 0;
}