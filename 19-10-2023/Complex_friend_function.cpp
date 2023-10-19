#include<iostream>
using namespace std;

class Complex{
	int real;
	int imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}
	void display(){
		cout<< real << " + " << imag << " i"<<endl;
	}
	friend void printSum(Complex,Complex);
	friend void printtMultiplication(Complex,Complex);
};

void printSum(Complex c1,Complex c2){
	int new_real = c1.real + c2.real;
	int new_imag = c1.imag + c2.imag;
	Complex ans(new_real,new_imag);
	ans.display();
}

void printtMultiplication(Complex c1,Complex c2){
	int new_real = c1.real * c2.real - c1.imag * c2.imag;
	int new_imag = c1.real*c2.imag + c1.imag*c2.real;
	Complex ans(new_real,new_imag);
	ans.display();
}

int main(){
	Complex c1(5,2);
	Complex c2(1,9);
	printSum(c1,c2);
	printtMultiplication(c1,c2);
	return 0;
}