/*
Cpp encapsulation programe

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 10/2/2025

*/
#include<iostream>
using namespace std;

class BankAccount{
    private:
        string account_holder;
        double balance;

        public:
        //set Account
        void setAccountHolder(string A){
        account_holder = A;
        }

        //set Account
        void setBalance(double B){
        balance = B;
        }

        public:
        //getter 
        string get_account(){
            return account_holder;
        }
        //getter
        double get_balance(){
            return balance;
        }
};

int main(){
    BankAccount Account1;
    Account1.setAccountHolder("Denis");
    Account1.setBalance(50000);

    cout<<"*****************************"<<endl;

    //output accountholder
    cout<<"Account Holder: "<<Account1.get_account()<<endl;

    //output balance
    cout<<"Balance: "<<Account1.get_balance()<<endl;

    cout<<"*****************************"<<endl;


    return 0;
}