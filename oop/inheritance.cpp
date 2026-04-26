#include<iostream>
#include<string>
using namespace std;

class Animal{

    public:
    //constructor 
    Animal(){
        cout<<"this is parent constructor\n";
    }

    //distructor
    ~Animal(){
        cout<<"this is parent distructor\n";
    }
    string name;
    string color;
    int age;
};

class Cat: public Animal{
    public:
    //this is child consturctor
    Cat(){
        cout<<"this is child constructor\n";
    }
    //distructor
    ~Cat(){
        cout<<"this is child distructor\n";    }
    string specie;
};

int main(){
    Cat c1;
    c1.name="rusk\n";
    cout<<c1.name;
}