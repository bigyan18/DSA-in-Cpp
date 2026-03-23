#include <iostream>
#include <fstream> // Essential for file handling
#include <string>

using namespace std;

int main() {
    // 1. WRITING TO A FILE
    ofstream MyWriteFile("example.txt"); 

    if (MyWriteFile.is_open()) {
        MyWriteFile << "Hello, this is a C++ file handling example!" << endl;
        MyWriteFile.close();
        cout << "Successfully wrote to the file." << endl;
    } else {
        cout << "Error: Could not open file for writing." << endl;
    }

    // 2. READING FROM A FILE
    string myText;
    ifstream MyReadFile("example.txt"); // Opens the file for reading

    if (MyReadFile.is_open()) {
        // Use a loop to read the file line by line
        while (getline(MyReadFile, myText)) {
            cout << "File Content: " << myText << endl;
        }
        MyReadFile.close();
    } else {
        cout << "Error: Could not open file for reading." << endl;
    }

    return 0;
}
