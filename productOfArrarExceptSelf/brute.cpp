#include<iostream>
#include<vector>
using namespace std;
int main(){
    int pr=1;
    vector<int> arr={1,2,3,4};
    vector<int> narr;
    for(int i=0;i<arr.size();i++){
        int pr=1;
        for(int j=0;j<arr.size();j++){
            if(i!=j){
            pr*=arr[j];
            }
        }
        narr.push_back(pr);
    }
    for(int i=0;i<narr.size();i++){
        cout<< narr[i]<<" ";
    }
}