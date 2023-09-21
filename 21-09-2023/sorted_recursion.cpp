#include<iostream>
using namespace std;

bool check_sorted(int *a,int n){
	// base case
	if(n==1 || n==0){
		return true;
	}

	// recursive case
	int cp = check_sorted(a+1,n-1);
	if(cp and a[0]<a[1]){
		return true;
	}
	else{
		return false;
	}
}

bool check_sorted_second(int *a,int i,int n){
	// base case
	if(i==n-1 or i==n){
		return true;
	}
	// recursive case
	bool cp = check_sorted_second(a,i+1,n);
	if(cp and a[i]<a[i+1]){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a[] = {1,4,9,10,11,19};
	int n = sizeof(a)/sizeof(int);
	if(check_sorted_second(a,0,n)){
		cout<<"array is sorted"<<endl;
	}
	else{
		cout<< "array is not sorted"<<endl;
	}
	return 0;
}