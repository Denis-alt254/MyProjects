/*
Cpp programe of Multilevel inheritance

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 24/2/2025

*/
#include<iostream>
using namespace std;

class A{
    public :
    string brand = "Ford";

};

class B:public A{

};
class C:public B{

};

int main(){

    return 0;
}
