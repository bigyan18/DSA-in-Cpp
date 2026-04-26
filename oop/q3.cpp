// LEVEL 3 — Private Members + Getters/Setters
// Q3. Create a class BankAccount with:
// private: accountNumber, balance
// public: deposit(), withdraw(), showBalance()
// Create an object and perform 3 deposits and 2 withdrawals.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class BankAccount{
    private:
    string accountNumber;
    double balance;
    
    public:
    //constructor
    BankAccount(string acc,double bal){
        accountNumber =acc;
        if(bal<0) bal=0;
        balance=bal;
    };

    //getter(read only);
    double getBalance(){
        return balance;
    }

    //setter write /upadate
    void setBalance(double newBalance){ 
        if(newBalance> 0) balance=newBalance;

    }
    void deposit(double amt){
        if(amt>0) balance+=amt;
    }
    void withdraw(double amt){
        if(amt>0 && balance>=amt){
            balance -=amt;
        }
    }
    void show(){
        cout<<"Acc: "<<accountNumber<<", Balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount a("Bigyan123", 1000);
    a.deposit(2000);
    a.deposit(3000);
    a.deposit(4000);
    a.withdraw(5000);
    a.withdraw(3000);
    a.show();
}

