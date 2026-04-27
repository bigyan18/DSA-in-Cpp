// LEVEL 9 — Menu‑Driven Program
// Q9. Create a class InventoryItem with:
// itemName
// quantity
// price
// Create a menu:
// Add item
// Show all items
// Search item
// Exit
// Use vector<InventoryItem>.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class InventoryItem{
    public:
    string itemName;
    int quantity;
    double price;
    //constructor
    InventoryItem(string n, int quantity, double price): itemName(n), quantity(quantity), price(price){};

    void show(){
        cout<<"ItemName: "<<itemName<<", Quantity: "<<quantity<<", Price: ="<<price*quantity<<endl;
    }
  
};
int main(){
    vector<InventoryItem> arr;
    int n;
    
    do{
      
        cout<<"1. To add item\n";
        cout<<"2. Show all the items\n";
        cout<<"3. Search itme\n";
        cout<<"4. Exit\n";
        cout<<"Enter you choice: ";
        cin>>n;
        cin.ignore();
        switch(n){
            case(1):{
                string name;
                int quantity;
                double price;
                cout<<"Enter the item name: ";
                getline(cin, name);
                cout<<"Enter the quantity: ";
                cin>>quantity;
                cout<<"enter the pice: ";
                cin>>price;
                arr.push_back(InventoryItem(name, quantity, price));
                cout<<"Item added\n";
            }
            break;
            case(2):{
                for(size_t i=0;i<arr.size();i++){
                    arr[i].show();
                }
            }
            break;
            case(3):{
                string searchItem;
                cout<<"Enter the search item ";
                getline(cin,searchItem);
                for(size_t i=0;i<arr.size();i++){
                    if(arr[i].itemName== searchItem){
                        cout<<"Found item\n";
                        cout<<"Item Name: "<<arr[i].itemName<<", Quantity: "<<arr[i].quantity<<", Price: "<<arr[i].price* arr[i].quantity<<endl;
                    }
                }
            }
            break;
            
        }
        
    }while(n!=4);


}