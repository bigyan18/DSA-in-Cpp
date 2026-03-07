#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={3,-4,5,4,-1,7,-8};
    int maxx=INT_MIN;
    int sum=0;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i];
        maxx=max(maxx, sum);
        if(maxx<0) sum=0;
    }
    cout<<"The max sum is "<<maxx;

}