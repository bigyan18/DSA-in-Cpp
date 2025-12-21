#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl; //4 bytes=4*8=32bits -2^31 to 2^31
    cout<< sizeof(long int)<<endl;
    cout<< sizeof(short int)<<endl;
    cout<< sizeof(long long int)<<endl;
    cout<< sizeof(signed int)<<endl;
    cout<<sizeof(unsigned int)<<endl; // only positive 
}