#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int current= arr[i];
        int prev= i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
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
    insertionSort(arr, n);
    printArr(arr,n);
}