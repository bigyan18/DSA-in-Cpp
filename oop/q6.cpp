// LEVEL 6 — Class With Methods That Modify State
// Q6. Create a class Counter with:
// private int value
// increment()
// decrement()
// reset()
// show()
// Simulate a counter being used 10 times.

#include<iostream>
#include<string>
using namespace std;

class Counter{
    int value;
    public:
    Counter(){
        value=0;
    }
    void increment(){
        value+=1;
    }
    void decrement(){
        if(value>0) value-=1;
    }
    void reset(){
        value=0;
    }
    void show(){
        cout<<"The val is: "<<value<<endl;
    }
};
int main(){
    Counter c1;
     c1.increment(); // 1
    c1.increment(); // 2
    c1.increment(); // 3
    c1.decrement(); // 2
    c1.increment(); // 3
    c1.increment(); // 4
    c1.decrement(); // 3
    c1.increment(); // 4
    c1.increment(); // 5
    c1.reset();     // 0

    c1.show();
}