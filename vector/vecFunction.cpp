#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<"size is "<<vec.size()<<endl;//size of vecotr

    vector<int>ve;
    cout<<"size before pushing "<<ve.size()<<endl;
    ve.push_back(23);
    cout<<"size after pusshing "<<ve.size()<<endl;//pushing add at last 

    ve.push_back(34);
        ve.push_back(45);
    for(int val:ve){
        cout<<val<<endl;
    }

    ve.pop_back();// means deleting
    cout<<"after deleting"<<endl;
    
    for(int val:ve){
        cout<<val<<endl;
    }

    cout<<"printing first value"<<endl;
    cout<<ve.front()<<endl;
    cout<<"printing last  value"<<endl;
    cout<<ve.back()<<endl;

    cout<<"using at "<<endl;
    //using at , it lis ve[i]= ve.at(i)
    cout<<ve.at(0)<<endl;

}