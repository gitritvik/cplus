 // 11) Write a Program to Calculate Power of a Number
// without using inbuilt pow() function by taking two
// inputs from users as Base and exponent respectively



#include <iostream>
using namespace std;


int main(){

    int base, exponent, result=1;

    cout<<"Enter the number as base of which you want to calculate the power - ";
    cin>>base;
    cout<<"Enter the exponent for the base you entered- ";
    cin>>exponent;


    for(int i=1; i<=exponent; i++){

        result= result*base;

    }

        cout<<base<<" Rais to "<<exponent<<" : "<<result;
    return 0;
}