#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4};
    for(int i =0;i<size(vec);i++){
        for(int j=i;j<size(vec);j++){
            cout<<j;
        }
        cout<<endl;
    }
}