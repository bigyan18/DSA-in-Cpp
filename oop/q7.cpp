// LEVEL 7 — Composition (Object inside Object)
// Q7. Create a class Address and a class Person:
// Address has:
// city
// street
// Person has:
// name
// Address address
// Create 3 people with addresses and print them.

#include<iostream>
#include<string>
using namespace std;

class Address{
    public:
    string street,city;
    Address(string st, string city): street(st), city(city){}
};

class Person{
    public:
    string name;
    Address address; //person has address
    Person(string name, Address addr)
        : name(name), address(addr) {}

    void show() {
        cout << "Name: " << name
             << ", City: " << address.city
             << ", Street: " << address.street
             << endl;
    }

};

int main() {
    Person p1("Ram", Address("Kathmandu", "Putalisadak"));
    Person p2("Hari", Address("Pokhara", "Lakeside"));
    Person p3("Sita", Address("Lalitpur", "Jawalakhel"));

    p1.show();
    p2.show();
    p3.show();
}
