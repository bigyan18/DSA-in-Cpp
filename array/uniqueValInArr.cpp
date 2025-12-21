#include<iostream>
using namespace std;
void unique(int arr[],int a){
    
    for(int i=0;i<a;i++){
        int count=0;
        for(int j=0;j<a;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]={1,1,2,3,2,3,4,4,5,6,7,6,5,10};
    unique(arr,14);
    return 0;
}