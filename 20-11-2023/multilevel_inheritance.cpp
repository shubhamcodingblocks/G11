#include<iostream>
using namespace std;

class B;

class A : public B{
public:
	void showA(){
		cout << "method in A" << endl;
	}
};

class B : public A{
public:
	void showB(){
		cout << "method in B" << endl;
	}
};

int main(){
	
	return 0;
}