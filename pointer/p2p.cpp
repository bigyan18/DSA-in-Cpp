#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* ptrA=&a;
    cout<<"address of a is "<<ptrA<<endl;
    int** p2pA=&ptrA;//storing address of ptrA
    cout<<"address of p2p is "<<p2pA<<endl;
    cout<<"the value store in ptrA is "<<*ptrA<<endl;
    cout<<"the value store in p2pA is "<<*p2pA<<endl;
    cout<<"the address of p2p is "<<&(p2pA)<<endl;
    return 0;
}