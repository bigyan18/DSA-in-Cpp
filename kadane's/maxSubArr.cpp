#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
     int maxSum=INT_MIN;
    for(int st=0;st<7;st++){
       int currentSum=0;
        for(int end=st;end<7;end++){
            currentSum+=arr[end];
            maxSum=max(currentSum,maxSum);

        }
    }
    cout<<endl<< "Max is " << maxSum;
}