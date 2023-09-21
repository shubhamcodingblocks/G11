#include<iostream>
using namespace std;

int fib(int n){
	// base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	// recursive case
	int cp1 = fib(n-1);
	int cp2 = fib(n-2);
	int bd = cp1+cp2;
	return bd;
}

int main(){
	int n = 8;
	cout<< fib(n) <<endl;
	return 0;
}