#include<iostream>
using namespace std;

int main(){
	int a[100000],b[100000],out[100000];
	int n;
	cin>>n; // number of elements in first array
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int i=0,j=0,k=0;
	while(i<n and j<m){
		if(a[i]<b[j]){
			out[k] = a[i];
			i++;
			k++;
		}
		else{
			out[k] = b[j];
			j++;
			k++;
		}
	}
	// put remaining elements from first array
	while(i<n){
		out[k] = a[i];
		k++;
		i++;
	}
	// put remaining elements from second array
	while(j<m){
		out[k] = b[j];
		j++;
		k++;
	}
	for(int i=0;i<m+n;i++){
		cout<<out[i]<<" ";
	}
	return 0;
}