#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={2,7,11,15};
    int i=0,j=vec.size()-1;
    int ans=0, target=9;
    vector<int> arr;

    while(i<j){
        ans=vec[i]+vec[j];
        if(ans<target) i++;
        else if(ans>target) j--;
        else {
            arr.push_back(i);
            arr.push_back(j);
            break;

        }

    }
    for(int val:arr){
        cout<< val;
    }

}