//peak index in a mountain array
#include<iostream>
#include<vector>
using namespace std;

#define dbg(x) cout<< #x << " " << x <<endl;
class solution{
public:
    int findpeak(vector<int>&arr){
        int s=0,e=arr.size()-1;
        int mid=s+(s-e)/2;
        while(s<e){
            dbg(mid)
            dbg(arr[mid])
            if(arr[mid]<arr[mid+1]){
               s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(s-e)/2;
        }
        return s;
    }
};
int main(){
    solution s;
    vector<int>a;
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    int b=s.findpeak(a);
    cout<<b<<endl;
}