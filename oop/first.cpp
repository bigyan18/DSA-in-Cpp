#include<iostream>
#include<string>
using namespace std;

class Student{

    public:
    //constructor -> and the constructor always gets automatically call first and just one time 
    Student(){
        cout<<"hello this is consturctor\n";
    }
    
    //properties/ attributes
    string name;
    int roll;
    string sub;

    //creating method// member functions
    void getInfo(string n, string s, int r ){

        name=n ;
        sub=s;
        roll=r;

        cout<<"Name : "<<n<<endl;
        cout<<"Subject : "<<s<<endl;
        cout<<"Roll no. : "<<r<<endl;
    }

};


int main(){

    Student s1;//creating opbject
    // s1.name="Bigyan";
    // s1.sub="Computer";
    // s1.roll=3;
    // cout<<s1.name;
    s1.getInfo("Bigyan", "Computer",3);    
    cout<<s1.name<<endl;

    Student s2;
    s2.getInfo("hello ", "idk ", 3);


}