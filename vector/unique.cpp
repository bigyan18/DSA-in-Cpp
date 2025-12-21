#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ve={1,2,3,4,3,2,1};
    int ans=0;
    for (int val: ve){
        ans ^=val;

    }
    cout<<"the unique is "<<ans<<endl;
}