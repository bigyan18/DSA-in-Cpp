#include<iostream>
using namespace std;
int main(){
    int n=4;
    int a=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            a++;
            cout<<a;
        }
        cout<<endl;
    }
    cout<<a;
}