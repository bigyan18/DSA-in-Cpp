#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if (count>=1){
            cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={3,4,5,6,7,8};
    intersection(arr1,arr2,6);
}