#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={7,1,5,3,6,4};
    int bestBuy=vec[0];
    int maxProfit=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>bestBuy){
            maxProfit=max(maxProfit,vec[i]-bestBuy);
        }
        bestBuy=min(bestBuy,vec[i]);

    }
    cout<<maxProfit;
}