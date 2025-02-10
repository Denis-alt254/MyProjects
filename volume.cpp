/*
Cpp programe to find the volume of a sphere

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 15/01/2025

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declare variables
    int radius;
    double volume;
    const int Pi = 22/7;
    string units = "cm";

    //Prompt the user to enter the radius
    cout <<"Enter the radius:"<<endl;
    cin >>radius;
    cout <<"Radius is: "<<radius<<units;

    //calculate the volume
    volume = 4/3 * Pi *(radius)^3;
    cout <<endl<<"Volume of the sphere is: "<<volume<<units<<"^2";

    return 0;
}