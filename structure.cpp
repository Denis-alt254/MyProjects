#include<iostream>
using namespace std;

struct Student{
    string name;
    int ID_num;
    string email;
    int d_birth;
    float GPA;
};
int main(){
    Student student1, student2;
    student1 = {"James", 4564223, "dkipkurui@gmail.com", 2005, 4.0};
    student2 = {"Denis", 7573284, "akelvin@gmail.com", 2006, 3.9};

    cout<<"Student 1"<<endl;
    cout<<"Name: "<<student1.name<<endl;
    cout<<"ID NUM: "<<student1.ID_num<<endl;
    cout<<"Email: "<<student1.email<<endl;
    cout<<"D OF BIRTH: "<<student1.d_birth<<endl;
    cout<<"GPA: "<<student1.GPA<<endl;

    cout<<endl;
    
    cout<<"Student 2"<<endl;
    cout<<"Name: "<<student2.name<<endl;
    cout<<"ID NUM: "<<student2.ID_num<<endl;
    cout<<"Email: "<<student2.email<<endl;
    cout<<"D OF BIRTH: "<<student2.d_birth<<endl;
    cout<<"GPA: "<<student2.GPA<<endl;

    return 0;
}