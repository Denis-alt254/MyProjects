/*
Cpp programe to find the volume of a cylinder

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 20/1/2025

*/

#include <iostream>
#include <cmath>
using namespace std;


float volume_cylinder(){
    float volume;
    int radius, height;
    volume = (22/7) * radius^2 * height;
    return volume;
}

int main(){
    //Define variables
    int radius, height;
    float volume;

    //Prompt the user to enter radius and height
    cout<<"Enter the radius: "<<endl;
    cin>>radius;
    cout<<"Enter the height: "<<endl;
    cin>>height;

    //Print radius and height
    cout<<"Radius is: "<<radius<<endl;
    cout<<"Height is: "<<height<<endl;

    //Calculate the volume
    volume = volume_cylinder();
    cout<<"Volume of the cylinder is: "<<volume;


    return 0;
}