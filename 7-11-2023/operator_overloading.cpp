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

	Complex operator-(){
		Complex ans = Complex(-real,-imag);
		return ans;
	}

	Complex operator++(){
		real++;
		imag++;
		Complex ans = Complex(real,imag);
		return ans;
	}

	Complex operator++(int){
		real++;
		imag++;
		Complex ans = Complex(real,imag);
		return ans;
	}

	Complex operator--(){
		real --;
		imag --;
		Complex ans = Complex(real,imag);
		return ans;
		// return Complex(real--,imag--);
	}

	Complex operator--(int){
		real--;
		imag--;
		Complex ans = Complex(real,imag);
		return ans;
		// return Complex(real--,imag--);
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
	c1.display();
	Complex c2 = ++c1;
	c2.display();
	c1.display();
	Complex c3 = c1++;
	return 0;
}