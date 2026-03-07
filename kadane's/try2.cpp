#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={3,-4,5,4,-1,7,-8};
    int maxx=INT_MIN;
   for(int st=0;st<vec.size();st++){
    int currSum=0;
    for(int end=st;end<vec.size();end++){
        currSum+= vec[end];
        maxx=(currSum, maxx);

    }
   }
   cout<< maxx;
}