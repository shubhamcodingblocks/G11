#include<iostream>
using namespace std;

void print_reverse(int n){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	cout<< n <<endl;
	print_reverse(n-1);
}

int main(){
	int n;
	cin>>n;
	print_reverse(n);
	return 0;
}