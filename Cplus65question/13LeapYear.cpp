// Write a Program to Check whether a year entered by
// user is Leap Year or not

// Input:
//       - Enter the year 

// Output:
//       - Tell that perticular year is a Leap year or not.

// Usage:
//       Compile the program and run it. Enter the year as prompted.


// // As we know any year which is devisible by 4 is a leap year
// // However, years that are divisible by 100 are not leap years, unless they are also divisible by 400.



#include <iostream>
using namespace std;

int main(){

    int year;
    cout<<"Enter the year- ";
    cin>>year;

    if(year%100 == 0){
        if(year%400 == 0){
            cout<<"this year is a leap year";
        }
        else{
            cout<<"This is not a leap year";
        }

    }

    else if(year % 4 == 0){
        cout<<"This is a leap year";

    }

    else{
        cout<<"This is not a leap year";
    }

    return 0;
}