#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={3,-4,5,4,-1,7,-8};
    int maxx=INT_MIN, cur=0;
    for(int i=0;i<vec.size();i++){
        cur +=vec[i];
        maxx=max(maxx, cur);
        if(cur<0) cur=0;

    }
    cout<<maxx;
}