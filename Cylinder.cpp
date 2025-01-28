/*
Cpp programe to find the area and volume of a cylinder
Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Date: 27/1/2025

*/
#include <iostream>
using namespace std;

  class Cylinder{
    public:
        int radius;
        int height;

        double calculateArea(){
            return (22/7 * radius^2 ) + (22/7 * radius * 2 *height);
        }

        double calculateVolume(){
            return (22/7 * radius^2) * height;
        }
 };

 int main(){
    Cylinder c1, c2;
    c1.height;
    c1.radius;

    //Declare variables
    double Area, Volume;

    //Prompt the user to enter the radius and height
    cout<<"Enter the radius: "<<endl;
    cin>>c1.radius;
    cout<<"Enter the height: "<<endl;
    cin>>c1.height;
    cout<<"Radius: "<<c1.radius<<" cm"<<endl;
    cout<<"Height: "<<c1.height<<" cm"<<endl;

    //Calculate area
    Area = c1.calculateArea();
    cout<<"Area is: "<<Area<<" cm^2"<<endl;

    //Calculate volume
    Volume = c1.calculateVolume();
    cout<<"Volume is: "<<Volume<<" cm^3"<<endl;
}
