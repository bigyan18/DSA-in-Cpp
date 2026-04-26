#include<iostream>
#include<string>
using namespace std;

class Teacher{

    public:

    //non-paramaterized constructor
    Teacher(){
        dept= "computer science\n";
    }

    string name;
    string dept;
    double salary;

    //paramatrized constructor
    Teacher(string name,string  dept,double salary){
         this->name=name;   
          /*this-> is used to indicate this is the property of the class && it stores the pointer of the obj
          this->prop is same as *(this).prop 
          *(this).prop= obj.prop
          */
         this->salary=salary;
         this->dept=dept;

    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"department: "<<dept<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

    //destructor -> it is called self like as constructor
    ~Teacher(){
        cout<<"Deleted everything \n";
    }


};

int main(){
    Teacher t1;
    cout<<t1.dept;
    Teacher t2("Bigyan ", "cs" , 30000);
    t2.getInfo();
    
}