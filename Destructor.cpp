/*
Cpp programe for destructor

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 6/3/2025

*/
#include<iostream>
using namespace std;

class Myname{
public:
    int* data;

    Myname(){
        data = new int[120];
        cout<<"Constructor called memory allocated."<<endl;
    }
    ~Myname(){
        delete[] data;
        cout<<"Destructor called, memory deallocated."<<endl;
    }
};
int main(){
    Myname obj;
    return 0;
}