/*
Cpp programe to calculate fine of library books

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 24/1/2025

*/

#include <iostream>
using namespace std;

int main(){
    //Declare variables
    int bookID, dueDate, returnDate, daysOverdue, fine, Overdue;

    //Prompt the user to enter bookId
    cout<<"Enter bookID:"<<endl;
    cin>>bookID;
    cout<<"BookID: "<<bookID<<endl;

    //Prompt the user to enter duedate
    cout<<"Enter dueDate:"<<endl;
    cin>>dueDate;
    cout<<"DueDate: "<<dueDate<<endl;

    //Prompt the user to enter returndate
    cout<<"Enter returnDate:"<<endl;
    cin>>returnDate;
    cout<<"ReturnDate: "<<returnDate<<endl;

    //Calculate the daysOverdue
    Overdue = returnDate - dueDate;
    cout<<"Days Overdue: "<<Overdue<<endl;

    //Check the fine
    if (Overdue < 1){
        cout<<"No fine. The book was returned early."<<endl;
    }else if (Overdue <=7){
        cout<<"Fine is: Ksh 20"<<endl;
    }else if(Overdue <= 14){
        cout<<"Fine is: Ksh 50"<<endl;
    }else{
        cout<<"Fine is: Ksh 100"<<endl;
    }
}