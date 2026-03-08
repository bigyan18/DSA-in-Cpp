#include<iostream>
#include<vector>
using namespace std;

int recBinary(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar<arr[mid]){
            return recBinary(arr,tar,st, mid-1);
            //end=mid-1;
        }
        else if(tar>arr[mid]){
            return recBinary(arr, tar, mid+1, end);
            //st=mid+1;
        }
        else return mid;


    }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,4,5,9,12};
    int tar=5;
    int st=0, end=arr.size()-1;
    cout<<recBinary(arr, tar, st, end);

}