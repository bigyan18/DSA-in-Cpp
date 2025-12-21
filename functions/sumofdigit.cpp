#include<iostream>
using namespace std;


int sumofdigit(int n){
    int a,b, s=0;

    while(n>0){
        a=n%10;
        n/=10;
        s+=a;
    }
    return s;
    
}
int main(){
    int n=124;
    
    
cout<<sumofdigit(n);
}