#include<iostream>
using namespace std;
void swapp(int arr[],int a){
    int min=INT_MAX;
    int max=INT_MIN;
    int min_pos, max_pos;
    for(int i=0;i<a;i++){
            if(arr[i]<min){
                min=arr[i];
                min_pos=i;
            }
    }
    for(int i=0;i<a;i++){
          if(arr[i]>max){
                max=arr[i];
                max_pos=i;
            }
    }
    swap(arr[max_pos],arr[min_pos]);
}
int main(){
    int arr[]={3,2,1,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"after swapping"<<endl;

    swapp(arr,5);
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}