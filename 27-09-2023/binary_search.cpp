#include<iostream>
using namespace std;

int main(){
	int a[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int tar;
	cin>>tar;
	int s = 0,e = n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==tar){
			cout<<" found at : "<<mid<<endl;
			break;
		}
		if(a[mid]>tar){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return 0;
}