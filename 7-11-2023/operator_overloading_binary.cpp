#include<iostream>
using namespace std;

class Complex{
public:
	int real;
	int imag;

	Complex(int r,int i){
		real = r;
		imag = i;
	}

	Complex operator+(Complex X){
		int new_real = real+X.real;
		int new_imag = imag+X.imag;
		return Complex(new_real,new_imag);
	}

	Complex operator-(Complex X){
		int new_real = real - X.real;
		int new_imag = imag - X.imag;
		return Complex(new_real,new_imag);
		// return Complex(real-X.real,imag-X.real);
	}

	Complex operator*(Complex X){
		int new_real = real*X.real - imag*X.imag;
		int new_imag = real*X.imag + imag*X.real;
		return Complex(new_real,new_imag);
	}

	void display(){
		if(imag>=0){
			cout << real << " + i " << imag <<endl;
		}
		else{
			cout << real << " - i " << -imag <<endl;
		}
	}
};

int main(){
	Complex c1(1,2);
	Complex c2(3,4);
	Complex c3 = c1+c2;
	Complex c4 = c1.operator+(c2);
	c4.display();
	c3.display();

	Complex c5 = c1-c2;
	Complex c6 = c1.operator-(c2);
	c5.display();
	c6.display();

	Complex c8 = c1*c2;
	Complex c9 = c1.operator*(c2);
	c8.display();
	c9.display();
	return 0;
}