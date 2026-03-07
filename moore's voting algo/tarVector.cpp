#include<iostream>
#include<vector>
using namespace std;

vector <int> pairSum(vector<int>nums,int tar){
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]== tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }

        }
    }
    return ans;
}

int main(){
    vector <int> arr={1,2,3,4,6};
    int tar=7;
    vector<int> ans= pairSum(arr, tar);
    cout<<ans[0]<<", "<<ans[1]<<endl;

}
