// LEVEL 8 — Vector of Objects + Search
// Q8. Create a class Contact with:
// name

// phone

// Store N contacts in a vector.
// Then ask the user for a name and search for that contact.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Contact{
    public:
    string name;
    string phone;
    Contact(string name, string phone):name(name), phone(phone){};
    
};
int main(){
    vector<Contact> c;
    int n;
    cout<<"enter the number of contact to add: ";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string name, phone;
        cout<<"Enter the name: ";
        getline(cin, name);
        cout<<"Enter the phone: ";
        getline(cin,phone);
        Contact p(name, phone);
        c.push_back(p);

    }
    string search;
    bool found = false;
    cout<<"Enter the name to search";
    getline(cin, search);
    for(size_t i=0; c.size(); i++){
        if(c[i].name==search){
            cout<<"found \n";
            cout<<"Name: "<<c[i].name<<", phone: "<<c[i].phone<<endl;
            found =true;
            break;
        }

    }
}