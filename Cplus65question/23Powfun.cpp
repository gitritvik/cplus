// 10) Write a Program to Calculate Power of a Number
// using inbuilt pow() function by taking two inputs from
// users as Base and exponent respectively

//for this we use Inbuilt library of c++  #include <cmath>


// Input:
//       - Enter the base and exponent of the number of which you want the Power-  ; 
        //input- paw(5,2)

// Output:
//       - It will print power of the number.
        //Output- 25
// Usage:
//       Compile the program and run it. Enter base and exponent as prompted.




#include <iostream>
#include <cmath>
using namespace std;

int main(){


    int base, exponent;

    cout<<"Enter No. of which as Base of which you want to calculate the Power- ";
    cin>>base;
    cout<<"Enter the base- ";
    cin>>exponent;

    cout<<base<<" rais to "<<exponent<<" = "<<pow(base, exponent);


    return 0;
}

