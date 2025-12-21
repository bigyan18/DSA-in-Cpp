#include<iostream>
using namespace std;

int linearSearch(int arr[], int size,int tar){
    for(int i=0;i<size;i++){
        if (arr[i]==tar){
            return i;
        }
    }
    return -1;
}
int main(){
    int tar=13,size=9;
    int arr[]={ 1,2,5,7,8,9,0,4,3};
    cout<<linearSearch(arr,size, tar);
    
}