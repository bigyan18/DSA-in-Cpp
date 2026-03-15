#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin, str);
   int st=0;
   int end= str.size()-1;
   int count=0;
   while(st<end){
    if(str[st++]==str[end--]){
    count++;
    }
   }
   if(count==(str.size()/2)) cout<<"palindrome";
   else cout<<"not palindrome";
}