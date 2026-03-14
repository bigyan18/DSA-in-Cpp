#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nxtPermutation(vector<int>& arr,int n){

    int piv=-1;

    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            piv=i;
            break;
        }
    }

    if(piv!=-1){
        for(int i=n-1;i>piv;i--){
            if(arr[i] > arr[piv]){
                swap(arr[i],arr[piv]);
                break;
            }
        }
    }

    reverse(arr.begin()+piv+1, arr.end());

    return arr;
}

int main(){
    vector<int> arr={1,2,5,4,3};
    int n=arr.size();

    nxtPermutation(arr,n);

    for(int i:arr){
        cout<<i<<" ";
    }
}
