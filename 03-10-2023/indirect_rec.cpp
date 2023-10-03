#include<iostream>
using namespace std;

void A(int n);

void B(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	A(n-1);
	cout<< n <<endl;
}

void A(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	B(n-1);
	cout<< n <<endl;
}

int main(){
	int n = 10;
	A(n);
	return 0;
}