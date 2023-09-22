#include<iostream>
using namespace std;
int ans = -1;
int findfirst(int *a,int i,int n){
	// base case
	if(i==n){
		return -1;
	}

	// recursive case
	if(a[i]==7){
		return i;
	}
	return findfirst(a,i+1,n);
}

int main(){
	int a[] = {1,2,7,8,9,7};
	int n = sizeof(a)/sizeof(int);
	cout << findfirst(a,0,n);	
	return 0;
}