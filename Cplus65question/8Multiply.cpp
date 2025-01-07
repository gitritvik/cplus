// Write a Program to Multiply two decimal Numbers

#include <iostream>
using namespace std;


//function for multiply-

double multiply(double num1, double num2){
    return num1*num2;
}

int main(){

    double num1, num2, num3;
    cout<<"Enter first no.- "<<endl;
    cin>>num1;
    cout<<"Enter second no.- "<<endl;
    cin>>num2;
    
    num3= multiply(num1, num2);

    cout<<"Multiplication is - "<<num3;


    return 0;
}