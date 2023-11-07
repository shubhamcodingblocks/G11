#include<iostream>
using namespace std;

class Car{
public:
	char * name;
	int *mileage;
	int * price;
	int * seats;

	Car(char * n,int m,int p,int s){
		name = new char[strlen(n)+1]; // +1-> for NULL character at end
		mileage = new int;
		price = new int;
		seats = new int;
		strcpy(name,n);
		*mileage = m;
		*price = p;
		*seats = s;
	}

	void display(){
		cout << "name: " << name <<endl;
		cout << "mileage: " << *mileage <<endl;
		cout << "price: " << *price <<endl;
		cout << "seats: " << *seats <<endl;
	}
};	

int main(){
	char name[100];
	Car C(name,100,10,2);
	C.display();
	return 0;
}