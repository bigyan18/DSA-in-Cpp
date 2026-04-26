#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Person{
    public:
    string name;
    string number;
    
    Person(string name, string number){
        this-> name=name;
        this-> number= number;
    }
    void show(){
        cout<<"Name: "<<name<<" - Number: "<<number<<endl;
    }
    
};

int main(){
    vector<Person> a;
    for(int i=0;i<4;i++){
      string name, number;
      cout<<"enter your name: ";
      getline(cin, name);

      cout<<"Enter your number: ";
      getline(cin, number);

      //creating obj and pushin it back
      Person p(name, number);
      a.push_back(p);
    }
    cout<<"\nData stored successfully\n";
    for(size_t i=0;i<a.size();i++){
        a[i].show();
    }
}