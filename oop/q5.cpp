// LEVEL 5 — Constructor + Validation
// Q5. Create a class Employee with:
// name
// salary
// In the constructor:
// if salary < 0, set salary = 0
// Print employee details.

#include<iostream>
#include<string>
using namespace std;

class Employee{
    public: 
    string name;
    double salary;
    // Employee(string n, double sal){
    //     name=n;
    //     if(sal<0) salary=0;
    //     else salary=sal;
    // }
    Employee(string n , double sal): name(n){
        salary= (sal<0 ?0:sal);//use of ternairy operator
    }
    void detail(){
        cout<<"Name: "<<name<<", salary: "<<salary<<endl;
    }
};
int main(){
    Employee e1("bigyan ", -200);
    Employee e2("Hari", 300);
    e1.detail();
    e2.detail();
}