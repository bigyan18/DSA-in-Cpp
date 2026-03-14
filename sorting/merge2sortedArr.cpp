#include<iostream>
#include<vector>
using namespace std;

vector<int> merge2sortedArr(vector<int>&arr1,int m, vector<int> &arr2,int n){
    int indx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[indx--]=arr1[i--];
            //indx--;
            //i--;
        }
        else{
                arr1[indx--]=arr2[j--];
                    //indx--;
                    //j--;
            }
        if(i<0){
            while(j>=0){
                arr1[indx--]=arr2[j--];
                //indx--;
                //j--;
            }
        }
        }

        return arr1;
}


int main(){
    vector<int> arr1={4,5,6,0,0,0};
    int m=3;
    vector<int> arr2={1,2,3};
    int n=3;
    for(int i:merge2sortedArr(arr1,m,arr2,n)){
        cout<<i<<" ";
    }
}