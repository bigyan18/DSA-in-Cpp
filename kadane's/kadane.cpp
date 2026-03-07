#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxSum=INT_MIN;
    int currSum=0;
    for(int st=0;st<7;st++){
       
       currSum+=arr[st];
       maxSum=max(currSum,maxSum);
       if (currSum<0) currSum=0;

        

    }
    cout<< "the max is "<< maxSum;
}