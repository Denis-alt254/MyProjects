/*
Cpp programe for arrays 3DMatrix

Author: Denis Kipkurui
Reg no: BSE-05-0175/2024
Group: 3
Date: 6/3/2025

*/
#include<iostream>
using namespace std;

int main(){
    int i, j, k;
    int arr[2][2][3] = {{{2, 3, 4},
                        {2, 2, 2}},
                        {{9,7,8},
                        {1,5,6}}};

                    for(i = 0; i < 2; i++){
                        for(j = 0; j< 2; j++){
                            for(k = 0; k<3 ; k++){
                                cout<<arr[i][j][k];

                            }
                            cout<<endl;
                            cout<<endl;

                        }
                        cout<<endl;
                    }
    cout<<arr[i][j][k]<<endl;
    return 0;
}