#include<iostream>
using namespace std;
int main(){
    int  a=10;
    cout<<&a<<endl;//printing address of a
    int* ptrA= &a;//storing address of a in ptrA
    cout<<ptrA<<endl;
    cout<<*(&a)<<endl;//printing value directly 
    cout<<*ptrA<<endl;//storing n printing value 

}