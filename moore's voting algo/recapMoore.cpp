#include<iostream>
#include<vector>

int main(){
    std::vector <int> vec{1,2,2,1,1};
    int freq=0;
    int ans;
    for(int i=0;i<vec.size(); i++){
        if(freq==0){    
        ans=vec[i];
        }
        if(ans==vec[i]) freq++;
        else freq--;
    }
    std::cout<<"the highest freq is "<<freq;
}