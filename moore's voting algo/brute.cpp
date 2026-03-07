#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,2,2,2,1,1};
    int border=vec.size()/2;
    for(int val: vec){
        int freq=0;
        for(int el:vec){
            if(val== el) freq++;
        }
        if(freq>border) {
            cout<<val;
            break;}
    }
}