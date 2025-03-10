#include<iostream>
using namespace std;

struct Customer{
    /* data */
    string name;
    double account_balance;
    string last_transaction;
};

void displayCustomer(const Customer c1){
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Account Balance:$ "<<c1.account_balance<<endl;
    cout<<"Last Transaction: "<<c1.last_transaction<<endl;
}

int main(){
    Customer c1;
    c1 = {"Denis", 108.75, "10/3/2025. 12:30 pm."};
    cout<<endl<<"Customer Details"<<endl<<endl;
    displayCustomer(c1);
    cout<<endl;
    return 0;
}