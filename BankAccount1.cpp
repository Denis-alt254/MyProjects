/*
Cpp programe of  Bank Account

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 24/2/2025

*/
#include<iostream>
using namespace std;

class AccountHolder{
    protected:
        string name;
//setter
        public:
        void setName(string n){
            name = n;
        }

//getter
        string getName(){
            return name;
        }


};
class BankAccount: public AccountHolder{
    private:
        int accountNumber;
        double balance;

        public:
            BankAccount(string n, int accNo, double bal){
                setName(n);
                accountNumber = accNo;
                balance = bal;
            }



//getter
        public:
            int getAccountNumber(){
                return accountNumber;
            }
            double getBalance(){
                return balance;
            }
};

class SavingsAccount: public BankAccount{
    private:
        double interestRate;

        public:
            SavingsAccount(string n, int accNo, double bal, double rate): BankAccount(n, accNo, bal){
                interestRate = rate;
            }
            double getInterestRate(){
                return interestRate;
            }
};

int main (){
    SavingsAccount myAccount("Mark Munene", 897868575, 500.5, 12);

    cout<<"Account Holder Details"<<endl;
    cout<<"Name: "<<myAccount.getName()<<endl;
    cout<<"Account Number: "<<myAccount.getAccountNumber()<<endl;
    cout<<"Balance: "<<myAccount.getBalance()<<endl;
    cout<<"Rate: "<<myAccount.getInterestRate()<<"%"<<endl;

    return 0;
}