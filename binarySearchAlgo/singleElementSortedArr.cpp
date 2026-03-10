#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,1,2,3,3,4,4,8,8};         //{3,3,7,7,10,11,11}
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!= arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        if(mid %2==0){
           if(arr[mid]==arr[mid-1]) end=mid-1;
           else st=mid+1; 
        }
        else{
            if(arr[mid]==arr[mid-1]) st=mid+1;
            else end=mid-1;
        }
    }
}