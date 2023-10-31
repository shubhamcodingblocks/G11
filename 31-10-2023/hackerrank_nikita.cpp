#include<iostream>
using namespace std;

int score(int *a,int s,int e){
	// base case
	if(s>=e){
		return 0;
	}
	// recursice case
	for(int i=s;i<=e;i++){
		// left part sum
		int left = 0;
		for(int j=s;j<=i;j++){
			left += a[j];
		}
		// right part sum
		int right = 0;
		for(int j=i+1;j<=e;j++){
			right += a[j];
		}
		if(left==right){
			return max(score(a,s,i),score(a,i+1,e)) + 1;
		}
	}
	return 0;
}

int main(){
	int n;
	cin >> n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << score(a,0,n-1) <<endl;
	return 0;
}