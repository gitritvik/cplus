// 2) Write a Program to Find Factorial of a given number N
// (N is entered by user)


// Input:
//       - Enter the No. of whcih you want the factorial; 

// Output:
//       - Prgoram return the factorial as output

// Usage:
//       Compile the program and run it. Enter the non- negatvie no. as prompted.



#include <iostream>
using namespace std;

int main(){

    int  num; 
    long long int fact = 1;

    cout<<"Enter the no. of which you want the factorial- ";
    cin>>num;

    if(num<0){
        cout<<"Invalid input! Enter a positive value";
        return 1;
    }
    else if(num == 0){

        cout<<"The Factorial of 0 is 1";
    }

    else{

        for(int i= 1; i<=num; i++){
            fact= fact*i;
        }

        cout<<"Factorial of "<<num<<" is - "<<fact;
    }


    return 0;
}