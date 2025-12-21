#include<iostream>

using namespace std;
int main(){
    int arr[6]={10,20,30,4,-5,-2};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int sm, la;
    for (int i=0;i<6;i++){
        if(arr[i]< smallest){
        smallest=arr[i];
        sm=i;

        }
        largest= max(arr[i], largest);
        la=i;// this logic doesn't work need for loop but it is eg
        
    }
    cout<<"smallest is "<<smallest<<endl;
    cout<<"largest is "<<largest<<endl;

    cout<< "small at "<<sm<<endl;
    cout<<"large at "<<la<<endl;
}