/*
Cpp programe of Hybrid inheritance

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 24/2/2025

*/
#include<iostream>
using namespace std;

class A {

};

class B:public A{

};

class C:public A{

};
class D:public B, public C{

};

int main(){
    return 0;
}