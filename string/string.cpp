#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="hello how are you";
    cout<<str<<endl;
    str="fine wbu?";// string are dynamically stored
    cout<<str<<endl;
    for( char i:str){
        cout<<i<<" ";
    }
    cout<<endl;

    //intputs in string
    string str2;
    getline(cin,str2);
    cout<<str2<<endl;
    cout<<str2.length();
}