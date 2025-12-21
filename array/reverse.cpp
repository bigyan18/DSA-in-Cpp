#include<iostream>
using namespace std;
void reverse(int arr[], int start,int  end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++; 
        end--;
        
    }
}
int main(){
    int start=0,end=4;
    int arr[5]={1,2,3,4,5};
    cout<< "real array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr, start, end);
    cout<<"reversed arr"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}