#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    
    Student(){
        cout<<"this is constructor and it is called automatically\n";
    }

    Student(string name, int roll): name(name), roll(roll) {
        cout<<name<<" "<<roll;
    }
};

int main(){
    Student s2;
   Student s1("bigyan",1);
}