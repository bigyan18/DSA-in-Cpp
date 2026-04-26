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
    vector<Student> d;
    int n;
    cout<<"Enter the no. of std: ";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string name, department;
        int roll;
        cout<<"enter name: ";
        getline(cin, name);

        cout<<"enter the department: ";
        getline(cin, department);
        cout<<"enter the roll number: ";
        cin>>roll;
        cin.ignore();
        Student s(name, department, roll);
        d.push_back(s);
    }
    for(size_t i=0;i<d.size();i++){
        d[i].show();
    }


}

