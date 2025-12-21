#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(5,3);
    for(int i:vec){//for each loop
        cout<<i<<endl;
    }
}