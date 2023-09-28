#include<iostream>
using namespace std;

void print_reverse(char* in,int n){
	// base case
	if(n==0){
		return;
	}
	cout << in[n-1];
	print_reverse(in,n-1);
}

int main(){
	char in[100];
	cin>>in;
	print_reverse(in,strlen(in));
	return 0;
}