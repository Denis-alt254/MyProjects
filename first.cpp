/*
cpp programe to check voting eligibility

Author: Denis
Reg no: BSE-05-0175/2024
Group: 3
Date: 13/01/2025
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declare variables
    string name;
    int age;

    //Prompt the user to enter his or her name
    cout <<"Enter your name:"<<endl;
    getline(cin, name);
    cout <<"My name is "<<name;

    //Prompt the user to enter his or her age
    cout <<endl<<"Enter your age:"<<endl;
    cin >> age;
    cout <<"My age is "<<age<<endl;

    if (age >=18){
        cout <<endl<<"You are allowed to vote";
    }else{
        cout <<endl<<"You are not allowed to vote";
    }

    return 0;
}