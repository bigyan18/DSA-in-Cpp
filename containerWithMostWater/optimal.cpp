#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    int lptr=0, rptr=arr.size()-1;
    int mArea=0;
    while(lptr<rptr){
        int wd, he;
        wd=rptr-lptr;
        he=min(arr[lptr], arr[rptr]);
        mArea= max(mArea, wd*he);
        arr[lptr]<arr[rptr]? lptr++ : rptr--;
    }
    cout<<"the max area is "<<mArea;
}