#include<iostream>
using namespace std;

class A{
public:
	int data_a;
};

class B : public A{
public:
	int data_b;
};

class C : public B{
public:
	int data_c;
};

int main(){
	
	return 0;
}