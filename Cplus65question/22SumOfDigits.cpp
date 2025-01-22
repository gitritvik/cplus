// 9) Write a Program to display sum of all digits of a given
// Number N by user

// Input:
//       - Enter the Number of which you want the Sum Of Digit.-  ; 
        //input- 5678

// Output:
//       - It will print the Sum Of Digit of the number.
        //Output- 26
// Usage:
//       Compile the program and run it. Enter the number as prompted.


#include <iostream>
using namespace std;

int main(){


    int N, sum= 0;
    cout<<"Enter the no. of which you want the sum- ";
    cin>>N;

    while(N != 0){

        sum = sum + (N%10);
        N = N/10;
                
        }
    cout<<"Sum of given no.- "<<sum;

    return 0;
}