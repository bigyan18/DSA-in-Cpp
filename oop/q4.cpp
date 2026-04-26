// LEVEL 4 — Multiple Constructors
// Q4. Create a class Rectangle with:
// length
// width
// Add:
// default constructor (sets both to 1)
// parameterized constructor
// function area()
// Create 3 rectangles using different constructors and print areas.
#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    public:
    double length;
    double width;
    Rectangle(){
        length=1 ;
        width=1;
    }
    Rectangle(double length, double width): length(length), width(width){};
    
    void area(){
        cout<<"the are is "<<length* width<<endl;
    }
};
int main(){
    Rectangle a1;
    a1.area();
    Rectangle a2(2,3);
    a2.area();
    return 0;

}