/*
Cpp programe to store car details

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Date: 28/1/2025

*/

#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        float price;
        int mileage;

        void display(){   
            cout<<"Car Details:"<<endl;
            cout<<"Brand: "<<brand<<endl;
            cout<<"Model: "<<model<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Mileage: "<<mileage<<endl;             
        }
        int drive(int distance_driven){
            int updated_mileage;
            updated_mileage = mileage + distance_driven;
            return updated_mileage;
        }
};

int main(){
    //Declare variables
    int Updated_mileage;
    Car c1, c2;
    c1.brand = "Toyota";
    c1.model = "Corolla";
    c1.price = 20000;
    c1.mileage = 5000;

    //Display car details
    c1.display();

    //Updated mileage
    cout<<endl<<"Updated_mileage: "<<c1.drive(150)<<endl;
    cout<<"Updated_mileage: "<<c1.drive(300)<<endl;


    return 0;
}