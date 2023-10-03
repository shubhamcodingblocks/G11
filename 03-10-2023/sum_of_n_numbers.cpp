#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(int *a,int i,int n,int tar,ans,int sum = 0){
	// base case
	if(sum==tar){
		for(int j=0;j<ans.size();j++){
			cout<<ans[j]<<" ";
		}
		cout<<endl;
		return;
	}
	if(i==n){
		return;
	}
	solve(a,i+1,n,tar,ans,sum);
	ans.push_back(a[i]);
	solve(a,i+1,n,tar,ans,sum+a[i]);
}

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int tar;
	cin>>tar;
	int n = sizeof(a)/sizeof(int);
	vector<int> ans;
	solve(a,0,n,tar);)
}