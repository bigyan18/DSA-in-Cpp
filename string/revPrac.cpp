#include<iostream>
#include<string>
#include<algorithm> // for using reverse function
using namespace std;
int main(){
    string ans;
    string str;
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    

for(int i=0;i<str.length();i++){
    string word="";
    while(i< str.length() ) {
        word+=str[i];
        i++;

    }
    reverse(word.begin(),word.end());
    //ans+=word;
    cout<<word;
}
//cout<<ans;

}