#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={ 1,4,5,6,7,8,9};
    int n=arr.size();
    int st=0, end=n-1;
    int tar=9;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]<tar) st=mid+1;
        else if (arr[mid]>tar) end=mid-1;
        if(arr[mid]==tar){
            cout<<mid;
            break;
        }
    }
}