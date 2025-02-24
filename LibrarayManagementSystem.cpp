/*
Cpp programe of Library Management System

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 24/2/2025

*/
#include<iostream>
using namespace std;

class Person{
    protected:
        string name;

        public:
            //setter
            void setName(string n){
                name = n;
            };
            
            //getter
            string getName(){
                return name;
            }
};

class LibraryMember:public Person{
    private:
        int memberID;
        int booksBorrowed;

        public:
            LibraryMember(string n, int id, int b){
                setName(n);
                memberID = id;
                booksBorrowed = b;
            }
            
            //getter
            int getMemberID(){
                return memberID;
            }
            int getBooksBorrowed(){
                return booksBorrowed;
            }
};

class PremiumMember:public LibraryMember{
    private:
        double membershipFee;

        public:
            PremiumMember(string n, int id, int b, double mf): LibraryMember(n, id, b){
                membershipFee = mf;
            }

            //getter
            double getMembershipFee(){
                return membershipFee;
            }
};

int main (){
    //Creat a PremiumMember object
    PremiumMember member1("Denis Korir", 868978242322, 2, 35);

    //Display member details
    cout<<"Library Member Details"<<endl;
    cout<<"Name: "<<member1.getName()<<endl;
    cout<<"Member ID: "<<member1.getMemberID()<<endl;
    cout<<"Books Borrowed: "<<member1.getBooksBorrowed()<<endl;
    cout<<"Membership Fee: "<<member1.getMembershipFee()<<"$"<<endl;

    return 0;
}