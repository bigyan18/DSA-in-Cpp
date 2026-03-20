#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

// finding max value in 2d array

int main(){
    vector<vector<int>> arr(4,vector<int>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=rand()%100;
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int maxVal=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            maxVal=max(arr[i][i],maxVal);
        }
    }
    cout<<"the max val is"<<maxVal<<endl;
}