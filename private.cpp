/*
Cpp private programe

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 10/2/2025

*/
#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        string name;
        int salary;

    public:
    //set name
    void setName(string Name){
        name = Name;

    }
    //set salary
    void setSalary(int s){
        salary = s;

    }
    public:
    //getter
    string get_name(){
        return name;
    }
    //getter
    int get_salary(){
        return salary;
    }
};
int main(){
    Employee person1;
    person1.setName("John");
    person1.setSalary(50000);

    cout<<"*****************************"<<endl;

    //output name
    cout<<endl<<"Name: "<<person1.get_name()<<endl<<endl;
    //output salary
    cout<<"Salary: "<<person1.get_salary()<<endl<<endl;
    cout<<"*****************************"<<endl;



    return 0;
}