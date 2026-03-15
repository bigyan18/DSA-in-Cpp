#include<iostream>

using namespace std;
int main(){
    char str[10];
    cin>>str;//cin ignores any char after comma
    cout<<str<<endl;
    for(char i: str){
        cout<<i<<" ";// in remaining index garvage value appears
    }
}