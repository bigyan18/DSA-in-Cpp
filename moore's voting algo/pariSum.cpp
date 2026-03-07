#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int> arr={1,2,3,4,5,6};
//     int tar=8;
//     int i=0, j=arr.size()-1;
//     int pairSum=0;
//     while(i<j){
//         pairSum=arr[i]+arr[j];
//         if(pairSum< tar) i++;
//         else if(pairSum> tar) j--;
//         else {
//             cout<<i<<" "<<j<<" ";
//             i++;
            
//         }
        
//     }
// }

// implentating with function

vector<int> tarCheck(vector<int> nums, int tar){
    int i=0,j=nums.size()-1;
    int ps=0;
    vector<int> ans;
    while(i<j){
        ps= nums[i]+nums[j];
        if (ps<tar) i++;
        else if (ps>tar)j--;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4,5,6};
    vector<int> ans=tarCheck(nums, 5);
    cout<< ans[0]<<" "<<ans[1];
}