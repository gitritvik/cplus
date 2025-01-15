// Write a Program to Display Fibonacci Series upto
// certain number n (n is entered by user)
// Example: n=100
// Output:
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,


// 

// Input:
//       - Enter the term No. upto where you want the Fibonacci Series-  ; 

// Output:
//       - It will print the Fiboacnni series.
// Usage:
//       Compile the program and run it. Enter the non- negatvie no. as prompted.



#include <iostream>
using namespace std;

int main(){

    int N, num1= 0, num2= 1, sum= 0;

    cout<<"Enter the Term no. upto where you want the Fibonacci series- ";
    cin>>N;
    cout<<"Your Fibonacci series is: "<<num1<<", "<<num2<<", ";
    
    sum= num1+num2;

    while(sum<=N){

        num1= num2;
        num2= sum;

        cout<<sum<<", ";

        // this line is mandetory to go out of loop.
        sum= num1+num2;

    }
    

    return 0;
}