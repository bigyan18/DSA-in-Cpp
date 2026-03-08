#include<iostream>
using namespace std;
//change by value
void change(int a){
    a=3;

}
//change by pointer
void refChange(int* ptr){
*ptr=100;
}

void alias(int &b){
    b=20;

}
int main(){
    int a=5;
    change(a);
    cout<<a<<endl;

    // pass by pointer
    refChange(&a);
    cout<<a<<endl;

    //pass by alias
    alias(a);
    cout<<a<<endl;
}