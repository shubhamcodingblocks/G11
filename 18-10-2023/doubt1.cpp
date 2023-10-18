#include<iostream>
using namespace std;

#define dbg(x) cout<< #x << " " << x <<endl;

int findpeak(int *arr, int s, int e) {
    // base case
    if (s == e) {
        return arr[s];
    }

    // recursive case
    int mid = s + (e - s) / 2;
    dbg(mid)
    dbg(arr[mid])
    // check if arr[mid] is the peak
    if (arr[mid] <= arr[mid + 1]) {
       return findpeak(arr, mid+1,e);
    } else {
       return  findpeak(arr,s, mid);
    }


}
int main(){
int arr[] = {3, 4, 5,6, 1, 2};

int peak = findpeak(arr, 0, 5);
cout<<"peak Element:"<< peak<<endl;
return 0;
}