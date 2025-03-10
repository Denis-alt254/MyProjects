/*
Cpp struct programe

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 10/3/2025

*/
#include<iostream>
using namespace std;

struct Student{
    string name;
    int ID_num;
    string email;
    int d_birth;
    float GPA;
};

void display( const Student student1){
    cout<<"Name: "<<student1.name<<endl;
    cout<<"ID NUM: "<<student1.ID_num<<endl;
    cout<<"Email: "<<student1.email<<endl;
    cout<<"D OF BIRTH: "<<student1.d_birth<<endl;
    cout<<"GPA: "<<student1.GPA<<endl;
}

int main(){
    Student student1, student2;
    student1 = {"James", 4564223, "dkipkurui@gmail.com", 2005, 4.0};
    student2 = {"Denis", 7573284, "akelvin@gmail.com", 2006, 3.9};

    cout<<"Memory"<<endl;
    cout<<"String size = "<<sizeof(string)<<endl;
    cout<<"int size = "<<sizeof(int)<<endl;
    cout<<"float size = "<<sizeof(float)<<endl;
    cout<<"String struc = "<<sizeof(Student)<<endl;

    cout<<endl;

    cout<<"Addresses"<<endl;
    cout<<"Name: "<<&student1.name<<endl;
    cout<<"ID No: "<<&student1.ID_num<<endl;
    cout<<"Email: "<<&student1.email<<endl;
    cout<<"DOB: "<<&student1.d_birth<<endl;
    cout<<"GPA: "<<&student1.GPA<<endl;

    cout<<"Student 1"<<endl;
    display(student1);

    cout<<endl;

    cout<<"Student 2"<<endl;
    display(student2);

    return 0;
}