#include<iostream>
using namespace std;

int stairs(int n){
	// base case
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	// recursive case
	int laststair = stairs(n-1);
	int lasttolaststair = stairs(n-2);
	return laststair + lasttolaststair;
}

int main(){
	int n;
	cin>>n;
	cout<< stairs(n) <<endl;
	return 0;
}