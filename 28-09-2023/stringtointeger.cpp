#include<iostream>
#include<cstring>
using namespace std;

int solve(char* in,int n){
	if(n==0){
		return 0;
	}

	int last_digit = in[n-1]-'0';
	return solve(in,n-1)*10 + last_digit;
}

int main(){
	char in[] = "1234";
	int ans = solve(in,strlen(in));
	cout<< ans + 100 <<endl;
	return 0;
}