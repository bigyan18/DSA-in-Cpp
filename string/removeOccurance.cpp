#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="daabcbaabcbc";
    string tar="abc";
    while(s.length()>0 && s.find(tar)<=s.length()){
        s.erase(s.find("abc"),tar.length());
    }
    cout<<s;
}