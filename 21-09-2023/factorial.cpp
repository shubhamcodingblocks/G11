#include<iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	int chotiproblem = fact(n-1);
	int badiproblem = chotiproblem*n;
	return badiproblem;
}

int main(){
	int n=5;
	cout<< fact(n) <<endl;
	return 0;
}