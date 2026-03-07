#include<iostream>
#include<vector>
using namespace std;

 int check(int arr[]){
        int freq=0, ans=0;
        for(int i=0;i<5;i++){
            if(freq==0){
                ans= arr[i];
            }
            if(ans==arr[i]) freq++;
            else freq--;
        }
        return ans;
    }
int main(){
   
    int arr[]={1,2,2,1,1};
    cout<<check(arr);
}