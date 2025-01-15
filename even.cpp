/*
Cpp programe of identify an even number

Author:Denis
Reg no:BSE-05-0175/2024
Date:15/01/2025

*/

#include <iostream>
using namespace std;

int main(){
    //Declare variables
    int num;
    int div;

    //Prompt the user to enter a number
    cout <<"Enter a number:"<<endl;
    cin >>num;
    cout <<endl<<"The number is "<<num<<endl;

    div = num % 2;

    //Check if num is even or odd
    if (div == 0 ){
        cout <<endl<<"The number is even";
    }else{
        cout <<endl<<"The number is odd";
    }

    return 0;
}