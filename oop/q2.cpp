// Q2. Create a class Student with:
// name

// roll

// department

// Ask the user to enter N students, store them in vector<Student>, and print all students.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string department;
    Student(string name, string department, int roll):name(name), department(department), roll(roll){};

    void show(){
        cout<<"Name: "<<name<<", department: "<<department<<", roll: "<<roll<<endl;
    }
};
int main(){
    
}

