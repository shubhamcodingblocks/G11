#include<iostream>
using namespace std;

int fact(int n,int ans){
	if(n<=0){
		return ans;
	}
	return fact(n-1,ans*n);
}

int main(){
	int n;
	cin>>n;
	cout<< fact(n,1) <<endl;
}