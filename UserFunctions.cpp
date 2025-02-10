/*
User defined Functions

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 20/1/2025

*/

#include <iostream>
using namespace std;

// Function declaration
float addition(float x, int y){
    float sum;
    sum = x + y;
    return sum;
}

// Function declaration
float simple_interest(int principle, float rate, int time){
    float interest;
    interest = principle * rate * time;
    return interest;
}

// Function declaration
int even_num(int num){
    return num % 2 == 0; // Return 1 if even, 0 if odd
}

int main(){
    float sum, interest;
    int num, even;

    // Function calling
    sum = addition(12.5, 56);
    interest = simple_interest(50000, 0.14, 4);

    // Print solutions
    cout << "Sum: " << sum << endl;
    cout << "Simple Interest: " << interest << endl;

    // Prompt the user to enter a number
    cout << "Enter a number:" << endl;
    cin >> num;
    cout << "Number: " << num << endl;

    // Call the even_num function after user input
    even = even_num(num);


    // Check if the number is even or odd
    if (even) {
        cout << "Is an even number" << endl;
    } else {
        cout << "Is an odd number" << endl;
    }

    return 0;
}