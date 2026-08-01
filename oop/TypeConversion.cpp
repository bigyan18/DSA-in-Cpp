#include<iostream>
#include<string>
using namespace std;

class Distance{
    private:
    double meters;

    public:
    Distance(double m):meters(m){}
    operator double()const{
        return meters;
    }
};

class Student{
    int roll;
    public:
    Student(int n):roll(n){}
    operator int()const{
        return roll;
    }
};

int main(){
    Distance d(12.5);
    double x=d;
    double y=d*2;
    Student s(2.5);
    int a=s;
    int b=s*2;
    cout<<x<<"\n"<<y<<"\n";
    cout<<a<<"\n"<<b<<"\n";
}