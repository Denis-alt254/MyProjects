/*
Cpp programe of  Body Mass Index

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 17/3/2025

*/
#include<iostream>
using namespace std;

float bmi(float weight, float height){
    float BMI;
    BMI = weight/(height*height);
    return BMI;
} 

int main(){
    //Declare variables
    float weight, height, Bmi;
    //Prompt the user to enter their weight in kg and height in m
    cout<<"Enter your weight in kg: "<<endl;
    cin>>weight;
    cout<<"Enter your height in metres: "<<endl;
    cin>>height;
    Bmi = bmi(weight, height);
    cout<<"BMI: "<<Bmi<<endl;

    if (Bmi < 18.5){
        cout<<"Underweight"<<endl;
    }
    else if (18.5<=Bmi && Bmi<24.9){
        cout<<"Normal Weight"<<endl;
    }
    else if (25<=Bmi && Bmi<29.9){
        cout<<"Overweight"<<endl;
    }
    else if (Bmi >= 30){
        cout<<"Obesity"<<endl;
    }
    else{
        cout<<"Invalid input!"<<endl;
    }

    return 0;
}