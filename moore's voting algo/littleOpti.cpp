#include <iostream>
#include <vector>
using namespace std;

int freq(vector<int> nums, int size) {
    int count = 1;
    int ans = nums[0];

    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count = 1;
            ans = nums[i];
        }

        if (count > size / 2) {
            return ans;
        }
    }
    return -1; // if no majority element
}

int main() {
    vector<int> nums = {1,1,1,1,2,2,2,2,2};
    int size = nums.size();

    cout << freq(nums, size);
}
