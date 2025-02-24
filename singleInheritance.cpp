/*
Cpp programe of single inheritance

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 24/2/2025

*/
#include<iostream>
using namespace std;

//Base class
class Animal{
    public:
        string color;

        void eat(){
            cout<<"I can eat."<<endl;
        }

        void sleep(){
            cout<<"I can sleep."<<endl;
        }

};

//child class
class Dog: public Animal{
    public:
    void bark(){
        cout<<"I can bark. "<<endl;
    }
};
int main(){
    Dog dog1;

    dog1.eat();
    dog1.sleep();
    dog1.bark();

    return 0;
}