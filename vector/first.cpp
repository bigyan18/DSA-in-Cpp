#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3};
    cout<<vec[0]<<endl;

    vector<int> vect(4,0);// another way to make vector
    cout<<vect[0]<<endl;
    cout<<vect[1]<<endl;
    cout<<vect[2]<<endl;
    cout<<vect[3]<<endl;

}