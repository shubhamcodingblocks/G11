#include<iostream>
using namespace std;

int main(){
	int a[5] = {6,7,8,9,12};
	cout<< a <<endl;
	// cout<< *(a+4) <<endl;
	// cout<< *(a+3) <<endl;
	// cout<< *(a+2) <<endl;
	// cout<< *(a+1) <<endl;
	// cout<< *(a+0) <<endl;
	for(int i=4;i>=0;i--){
		cout<< *(a+i) <<endl;
	}
	return 0;
}