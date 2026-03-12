#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[smallest]>arr[j]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
}
void printArr(vector<int> arr, int n){
    for(int i : arr){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> arr={4,1,5,2,3};
    int n= arr.size();
    selectionSort(arr, n);
    printArr(arr,n);
}