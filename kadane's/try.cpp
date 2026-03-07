#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for (int st=0;st<5;st++){
        for(int en=st;en<5;en++){
            for(int k=st;k<=en;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}