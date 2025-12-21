#include<iostream>
using namespace std;

void fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    cout<<"fact is "<<a;
}

int main(){
    fact(4);
    
}