#include <iostream>
#include <vector>
using namespace std;

vector<int> check(vector<int> nums) {
    vector<int> ans;

   for( int st=0;st<nums.size();st++){
    int count=0;
    for(int mo=st;mo<nums.size();mo++){
        if(nums[st]==nums[mo]){
            count++;
           
            }
             if(count>4){
                ans.push_back(nums[st]);
                return ans;
            count=0;

        }
    }
   }
   return ans;
}

int main() {
    vector<int> nums = {1,1,1,2,2,2,2,2};
    vector<int> ans = check(nums);
    cout<<ans[0];
    return 0;
}
