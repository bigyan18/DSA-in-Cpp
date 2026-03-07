#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr={7,1,5,3,6,4};
    int MaxProfit=0;
    int bestBuy=arr[0];
    for(int i=0;i<arr.size();i++){
        if(bestBuy<arr[i]){
            MaxProfit=max(MaxProfit,arr[i]-bestBuy);
        }
        bestBuy=min(bestBuy,arr[i]);

    }
    cout<<"the max profit is "<<MaxProfit;
    return 0;
}