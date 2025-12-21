#include<iostream>
using namespace std;

int sum(int arr[],int a){
    int sum=0;
    for(int i=0;i<a;i++){
        sum+=arr[i];
    }
    return sum;
}
int product(int arr[],int a){
    int prod=1;
    for(int i=0;i<a;i++){
        prod*=arr[i];
    }
    return prod;
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"the sum is "<<sum(arr,5)<<endl;
    cout<<"the product is "<<product(arr,5)<<endl;
}