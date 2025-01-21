// 7) Write a Program to Find LCM of two numbers entered
// by user


// How it works-
// First of all it take two integers from the user and based on the logic that LCM can not be less than greatest no. and can not be more than the multiplication of the both numnbers
// 

// The second method uses formula to find the LCM
// The formula is- (First no. X second no. = HCF X LCM)

// This is the first method of finding the GCD or HCF

#include <iostream>
using namespace std;

int main(){

    int num1, num2,max,i;

    cout<<"Enter the First no.- ";
    cin>>num1;
    cout<<"Enter the second no.- ";
    cin>>num2;

    max= (num1>num2)?num1:num2;

    for( i= max; i<= num1*num2; i= i+max){
        if(i%num1==0 && i%num2 == 0)
        break;
    }

    cout<<"Lcm of "<<num1<<" and "<<num2<< " is - "<<i;

    return 0;
}