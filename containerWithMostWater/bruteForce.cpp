#include<iostream>  
#include<vector>
using namespace std;
int main(){
    int width=0, height=0,m_area=0;
    vector<int>arr={1,8,6,2,5,4,8,3,7};
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
        //cout<<arr[i]<<" "<<arr[j]<<"    ";
        width=j-i;
        height=min(arr[i],arr[j]);
        m_area=max(width * height,m_area);


        }
    }
    cout<<"the max area is "<<m_area;
}