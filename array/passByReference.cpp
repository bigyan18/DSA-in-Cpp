#include<iostream>
using namespace std;

void change(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i]= 2*arr[i];
    }
}
int main(){
    int arr[]={1,2,3};
    change(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" " ;
    }
}