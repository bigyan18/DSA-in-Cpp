#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

bool isPossible(const vector<int>& arr,int n,int m, int maxAllowed){//mid is set as maxAllowed as it is most possible
    int painter=1, time=0, check=0;
    for(int i=0; i<n;i++){
        if(time+arr[i]<=maxAllowed) time+=arr[i];
        else{
            painter++;
            time=arr[i];
        }
            
    }
    return painter<=m;
}

int main(){
    vector<int> arr={ 40,30,10,20};
    int ans;
    int m=2;
    int st=INT_MIN;// st is obitained by individually divinding each portion by each painter, so max is starting point
    for(int i : arr){
        st=max(st, i);
    }
    int end=0;
    for( int i: arr){
        end+=i;
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        
        int n=arr.size();
        if(isPossible(arr,n, m, mid)) {
         ans= mid;
            end=mid-1;
        }
        else st=mid+1;
    }    
    cout<<ans;
}