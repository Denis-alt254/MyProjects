/*Cpp program that display salary of an employee

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Date: 2/6/2025

*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declare variables
    double salary;
    float rate;
    const int allowance = 3000;
    double net_salary;
    string currency = "Ksh";
    char continue_input;

    do{

    //Prompt the user to enter salary
    cout<<"Enter your salary:"<<endl;
    cin>>salary;

    //Check rate
    if (salary <10000){
        rate = 0;
    }else if (salary <= 30000){
        rate = 0.12;
    }else if (salary <= 50000){
        rate = 0.14;
    }else if (salary <= 100000){
        rate = 0.20;
    }else if (salary > 100000){
        rate = 0.30;
    }

    //Calculate tax
    double tax = salary * rate;
    cout<<"Tax: "<<tax <<" "<<currency<<endl;

    //Calculate SHA
    double SHA = salary * (2.75/100);
    cout<<"SHA: "<<SHA<<" "<<currency<<endl;

    //Calculate house levy
    double levy = salary * 0.015;
    cout<<"Levy: "<<levy<<" "<<currency<<endl;
    cout<<"Allowance: "<<allowance<<" "<<currency<<endl;

    //calculate net salary
    net_salary = salary - tax - SHA - levy + allowance;
    cout<<"Net Salary: "<<net_salary<<" "<<currency<<endl;

    //Ask the user if he/she wants to enter another salary
    cout<<"Do you want to enter another salary? (y/n):";
    cin>>continue_input;
    }while (continue_input == 'y' || continue_input == 'Y');
    cout<<"Thank you for using salary calculator.";

    return 0;
}