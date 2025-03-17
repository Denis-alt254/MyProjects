/*
Cpp programe of  bonus

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 17/3/2025

*/
#include<iostream>
using namespace std;
 
void calculateBonus(float rate){
    float salary;
    float total;
    float bonus;
    bonus = salary*rate/100;
    cout<<"Bonus: "<<bonus<<endl;
    total = bonus + salary;
    cout<<"Total: "<<total<<endl;
    
}
void loan(){
    int age;
    float salary;
    if (age >=21){
        if (salary >=21000){
            cout<<"Congratulations you qualify for loan."<<endl;
        }
        else{
            cout<<"Unfortunately, we are unable to offer you a loan at this time."<<endl;
        }
    }
}
int main(){
    //declare variables
    float salary;
    float experience;
    int rate, age;
    //Prompt the employee to enter there salaries and experience
    cout<<"Enter your salary: "<<endl;
    cin>>salary;
    cout<<"Enter your experience: "<<endl;
    cin>>experience;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    if (experience > 10){
        rate = 12;
        calculateBonus(rate);
        loan();
    }
    else if (6<=experience<=10)
    {
        rate = 10;
        calculateBonus(rate);
        loan();
    }
    else if (experience<6)
    {
        rate = 6;
        calculateBonus(rate);
        loan();
    }
       
    return 0;
}