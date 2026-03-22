#include <iostream>
#include <vector>
using namespace std;

// Binary search inside one row
bool find(vector<vector<int>>& arr, int row, int cols, int tar) {
    int left = 0;
    int right = cols - 1;
    
    while (left <= right) {
        int mid_col = left + (right - left) / 2;
        
        if (arr[row][mid_col] == tar) {
            return true;
        }
        else if (arr[row][mid_col] < tar) {
            left = mid_col + 1;   //fixed: move right
        }
        else {
            right = mid_col - 1;  //fixed: move left
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int rows = arr.size();
    int cols = arr[0].size();
    int target = 34;
    
    int top = 0;
    int bottom = rows - 1;          //fixed: rows-1, not cols-1
    
    bool printed = false;
    
    while (top <= bottom) {
        int mid_row = top + (bottom - top) / 2;
        
        if (arr[mid_row][0] <= target && target <= arr[mid_row][cols-1]) {
            if (find(arr, mid_row, cols, target)) {
                cout << "exists\n";
            } else {
                cout << "doesn't exist\n";
            }
            printed = true;
            break;  
        }
        else if (target > arr[mid_row][cols-1]) {
            top = mid_row + 1;
        }
        else {
            bottom = mid_row - 1;
        }
    }
    
    if (!printed) {
        cout << "doesn't exist\n";
    }
    
    return 0;
}