#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Ac3?e3c&a";
    int st=0;
    int end= s.length()-1;
    while(st<=end){
        if(!(isalnum(s[st]))) {
            st++;
            continue;
        }
        if(!(isalnum(s[end]))){ 
            end--;
            continue;
        }
        
        if(tolower(s[st++])!=tolower(s[end--])){
            cout<<"not palindrome"<<endl;
            exit(1);
        }
        
    }
    cout<<"the word is palindrome";
}