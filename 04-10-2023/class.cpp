#include<iostream>
using namespace std;

class Rectangle{
	int length;
	int breadth;
public:
	void set(int l,int b){
		length = l;
		breadth = b;
	}
	int get_length(){
		return length;
	}
	int get_breadth(){
		return breadth;
	}
};

int main(){
	Rectangle r1;
	r1.set(5,4);
	cout<< r1.get_length() <<" "<<r1.get_breadth()<<endl;

	Rectangle r2;
	r2.set(6,7);
	cout<< r2.get_length() <<" "<<r2.get_breadth()<<endl;
	return 0;
}