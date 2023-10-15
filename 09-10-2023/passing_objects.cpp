#include<iostream>
using namespace std;

class Complex{
	int real;
	int imag;
public:
	void set(int r,int i);
	int get_real();
	int get_imag();
	void subtract(Complex n2);
	void addition(Complex n2);
	void multiply(Complex n2);
};

void Complex::set(int r,int i){
	real = r;
	imag = i;
}

int Complex::get_real(){
	return real;
}

int Complex::get_imag(){
	return imag;
}

void Complex::subtract(Complex n2){
	cout<< real-n2.real <<" + i "<< imag-n2.imag <<endl;
}

void Complex::addition(Complex n2){
	cout<< real+n2.real <<" + i "<< imag+n2.imag <<endl;
}

void Complex::multiply(Complex n2){
	cout<< (real*n2.real - imag*n2.imag)<<" + i "<< (real*n2.imag + imag * n2.real) <<endl;
}

int main(){
	Complex n1;
	Complex n2;
	n1.set(10,5);
	n2.set(5,2);
	n1.subtract(n2);
	n1.addition(n2);
	n1.multiply(n2);
	return 0;
}