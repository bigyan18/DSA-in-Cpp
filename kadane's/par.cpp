#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={3,-4,5,4,-1,7,-8};
    int sum=0;
    int maxx=INT_MIN;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum<0) sum=0;
        maxx=max(sum,maxx);

    }
    // cout<<maxx;
    // int currSum=0;
    // int maxSum=arr[0];
    // for(int i=0;i<arr.size();i++){
    //     currSum=max(maxSum, currSum+arr[i]);
    //     maxSum=max(currSum,maxSum);
    // }
    // cout<<maxSum;
}