#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,2,1,1};
    int freq=0;
    int ans=0;
    for (int i=0;i<vec.size();i++){
        if(freq==0) ans=vec[0];
        if(vec[i]==ans) freq++;
        else freq--;
    }
    cout<<ans;
}