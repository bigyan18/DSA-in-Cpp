#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWord(string s){
    int n=s.length();
    string ans="";
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        cout<<word<<endl;
        reverse(word.begin(),word.end());
        if(word.length()>0 ) ans+=" "+ word;
    }
    return ans.substr(1);
}

int main(){
    string s="kak dela  man ???? ";
    cout<<reverseWord(s);
}