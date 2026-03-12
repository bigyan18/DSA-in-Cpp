#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,1,0,1,2,0};
    int n=arr.size();
    int mid=0,low=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        if(arr[mid]==1) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i: arr){
        cout<<i<<" ";
    }
}