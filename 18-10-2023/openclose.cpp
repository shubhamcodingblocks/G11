#include<iostream>
using namespace std;

void gen(string s,int n,int open,int close){
	if(s.length()==2*n){
		cout<< s <<endl;
		return;
	}
	if(close<open){
		s.push_back(')');
		gen(s,n,open,close+1);
	}
	if(open<n){
		s.push_back('(');
		gen(s,n,open+1,close);
	}
}

int main(){
	
	return 0;
}