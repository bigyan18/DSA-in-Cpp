#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={2,11,7,15};
    vector<int> ne;
    int target=9, check=0;
    for(int st=0;st<vec.size();st++){
        for (int end=st+1;end<vec.size();end++){
            check=vec[st]+vec[end];
            if(check== target){
                ne.push_back(st);
                ne.push_back(end);
                
            }
        }
    }
    cout<<ne[0]<<" "<<ne[1];
}