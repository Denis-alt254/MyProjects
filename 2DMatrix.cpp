/*
Cpp programe for arrays 2DMatrix

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 6/3/2025

*/
#include<iostream>
using namespace std;

int main(){
    int i, j;
    int arr[2][3] = {{2, 3, 4},
                    {2, 2, 2}};

                    for(i = 0; i < 2; i++){
                        for(j = 0; j< 3; j++){
                            cout<<arr[i][j];
                        }
                        cout<<endl;
                    }
    cout<<arr[i][j]<<endl;
    return 0;
}