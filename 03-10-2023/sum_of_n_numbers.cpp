#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& a,int i,int tar,vector<int>& ans){
	if(i==a.size()){
		int sum=0;
		for(int j=0;j<ans.size();j++){
			sum+=ans[j];
		}
		if(sum==tar){
			sort(ans.begin(),ans.end());
			for(int j=0;j<ans.size();j++){
				cout<<ans[j]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	ans.push_back(a[i]);
	solve(a,i+1,tar,ans);
	ans.pop_back();
	solve(a,i+1,tar,ans);
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int tar;
	cin>>tar;
	vector<int> ans;
	solve(a,0,tar,ans);
	return 0;
}