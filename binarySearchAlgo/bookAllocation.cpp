#include<iostream>
#include<vector>
#include<numeric> // for accumulate
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowed){
    int students = 1;
    int pages = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowed) return false;

        if(pages + arr[i] <= maxAllowed){
            pages += arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
    }

    return students <= m;
}

int main(){
    
    vector<int> arr = {2,1,3,4};
    int m = 2;
    int n = arr.size();

    if(m > n){
        cout << "error";
        return 0;
    }

    int st = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    cout << "Minimum possible maximum sum: " << ans;
}