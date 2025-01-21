// Find GCD (HCF) of Two Numbers
// Description:
// This program calculates the Greatest Common Divisor (GCD) or Highest Common Factor (HCF) of two user-provided integers using the Euclidean Algorithm.

// How It Works
// Takes two integers as input from the user.
// Determines the larger number as the dividend and the smaller number as the divisor.
// Uses a loop to compute the remainder and update the dividend and divisor until the remainder is 0.
// Outputs the GCD (HCF) of the two numbers.





#include <iostream>
using namespace std;

int main(){


    int num1, num2, dvend, divsr, remdr;

    cout<<"Enter the first no- ";
    cin>>num1;
    cout<<"Enter the second no.- ";
    cin>>num2;

    if(num1== 0 && num2== 0){

        cout<<"Both no. can't be zero. Plese Retry";

        return 0;


            }
    else if(num1>num2){
    dvend= num1;
    divsr= num2;
    }
    else{
    dvend= num2;
    divsr= num1;  
    }
    

    for(remdr=dvend % divsr; remdr!=0;remdr = dvend % divsr ){

        dvend= divsr;
        divsr= remdr;

    }


    cout<<"HCF is- "<<divsr;   
    
    
    return 0;
}