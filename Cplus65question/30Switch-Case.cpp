// 1) Write a Program to Make a Simple Calculator to Add, Subtract,
//  Multiply or Divide Using Switch case
//  The program should takes an arithmetic operator (+, -, *, /) and
//  two operands from a user and performs the operation on those
//  two operands depending upon the operator entered by the user.

#include <iostream>
using namespace std;

int main(){

    int a, b, choice;
    cout<<"Enter Two no. to perform any operatioon- ";
    cin>>a>>b;

    cout<<"Press \n1- For additon \n2- For substracion \n3- For Multiplicaton \n4- For devide\nYour Choice- ";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Addition of numbers is: "<<a+b;
        break;
        case 2:
        cout<<"Substracition of numbers is: "<<a-b;
        break;
        case 3:
        cout<<"mulitplication of numbers is: "<<a*b;
        break;
        case 4:
        cout<<"Division of numbers is: "<<a/b;
        break;
        default:
        cout<<"Please choose a right option ";
        break;
        
    }



    return 0;
}