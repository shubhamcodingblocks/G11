#include<iostream>
using namespace std;

int main(){
	int a = 5;
	int * aptr = NULL;
	cout<< a <<endl;
	cout<< *(aptr) <<endl; // will generate error
	return 0;
}