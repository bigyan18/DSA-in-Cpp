// LEVEL 10 — Challenge
// Q10. Create a class Library that contains a vector of Book objects.
// Implement:
// addBook()
// removeBook()
// showAllBooks()
// searchBookByTitle()
// This is a mini‑project.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book{
    public:
    string title, author;
    double price;
    Book(string title, string author, double price): title(title), author(author), price(price){}; 
    void show(){
        cout<<"Title: "<<title<<", Author: "<<author<<", Price: "<<price<<endl;
    }
};

class Library{
public:
    vector<Book> books;
    void addBooks(string title, string author, double price){
        books.push_back(Book(title, author, price));
        cout<<"Book added successfully\n";
    }
};