#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int target=9;
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            sum=arr[i]+arr[j];
            if(sum== target){
                cout<< i<<" "<<j<<endl;
                cout<<"the val are "<<arr[i]<<" "<<arr[j];
            }

        }
    }
}
