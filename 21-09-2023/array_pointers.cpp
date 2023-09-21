#include<iostream>
using namespace std;

int main(){
	int a[] = {1,2,4,5,6};
	int n = sizeof(a)/sizeof(int);
	cout<< a[0] <<" "<<*(a+0)<<endl;
	int *p = a+1;
	cout<< *(p+0) <<" "<<p[0]<<endl;
	return 0;
}