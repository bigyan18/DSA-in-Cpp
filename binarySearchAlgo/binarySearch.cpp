#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,0,3,4,5,9,12};
    int tar=4;
    int st=0;
    int n=7;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){
            cout<<mid; 
            break;}
        else if(arr[mid]<tar){
            st=mid+1;
        }
        else end=end-1;
    }
}