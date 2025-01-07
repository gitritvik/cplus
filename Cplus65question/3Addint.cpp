//Write a program to add two integer entered by the user-

#include <iostream>
using namespace std;

int add(int a, int b){ // cretign funtion to add two values entnerd by the user
    return a+b;
}

int main(){

    
    int a,b,sum; 
    cout<<"Enter first no.- ";  // taking inputs
    cin>>a;
    cout<<"Enter second no- ";
    cin>>b;
   
    sum= add(a,b); //calling the function
     cout<<"Sum of two No Entered by the user - "<<sum; // showing the result thrown by the function

    return 0;
}