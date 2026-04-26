#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    double price;
    Book(string title, string author , double price)
    : title(title), author(author), price(price){
        // this-> title= title;
        // this-> author = author;
        // this-> price =price;
    }
    void show(){
        cout<<"Title: "<<title<<", Author: "<<author<<", Price: "<<price<<endl;
    }
};

int main(){
    Book b1("idk", "ram", 1234);
    Book b2("shit", "hari", 789);
    Book b3("dfdf", "fdfdf", 456);
    b1.show();
    b2.show();
    b3.show();

}