#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str1[6]={'b','i','g','y','a','n'};
    string str2="I am Bigyan ";
    int st=0;
    int end=strlen(str1)-1;
    while(st<end){
        swap(str1[st],str1[end]);
        st++;
        end--;
    }

    for(char i: str1){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(str2.begin(),str2.end());
    cout<<str2;
}