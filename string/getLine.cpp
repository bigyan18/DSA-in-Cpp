#include<iostream>
using namespace std;
int main(){
    char str[100];
    cin.getline(str,10);    //cin.getline(str,len,delimiter) delimiters stops storing after some keywords
    cout<<str<<endl;
    for(char i: str){
        cout<<i<<" ";
    }
}