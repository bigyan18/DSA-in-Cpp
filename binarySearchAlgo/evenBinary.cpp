#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={-1,0,3,4,5,9,12,13};
    int tar=0;
    int n=arr.size();
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){cout<<mid; break;}
        else if(arr[mid]<tar) st=mid+1;
        else end= mid-1;
    }
}