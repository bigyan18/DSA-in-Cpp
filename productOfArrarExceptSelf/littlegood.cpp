#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4};
    vector<int> narr(4);
    vector<int> prefix(4);
    vector<int> suffix(4);
    for(int i=1;i<arr.size();i++){
        prefix[i]=prefix[i-1]*arr[i-1];

    }
    
    for(int i=1;i<arr.size();i++){
        suffix[i]=suffix[i]*suffix[arr.size()-1];

    }
    suffix[arr.size()-1] = 1;
    for(int i = arr.size()-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * arr[i+1];
    }
    for(int i=0;i<arr.size();i++){
        narr[i]=prefix[i]*suffix[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<narr[i]<<" ";
    }



}