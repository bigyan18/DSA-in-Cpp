#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    cout<<str<<endl;
    int st=0;
    int end=str.length()-1;
    int count=0;
    while(st<=end){
        if(str[st++]==str[end--]){
        }
        else {cout<<"not palindrome\n"; return 1;}
    }
    cout<<" palindrome ";
    
}