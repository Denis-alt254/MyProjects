#include<iostream>
using namespace std;

struct patient{
    string name;
    int age;
    string diagnosis;
};

void displayPatients(const patient patient1){
    cout<<"Name: "<<patient1.name<<endl;
    cout<<"Age: "<<patient1.age<<endl;
    cout<<"Diagnosis: "<<patient1.diagnosis<<endl;

}
int main(){
    patient patient1, patient2;
    patient1 = {"Kelvin", 23, "Malaria"};
    patient2 = {"Duncan", 33, "Blood Pressure"};

    cout<<"Patient 1"<<endl;

    displayPatients(patient1);

    cout<<endl;

    cout<<"Patient 2"<<endl;

    displayPatients(patient2);

    return 0;
}