// 12) Write a Program to Check Whether a Number N
// entered by user is Palindrome or Not


// Input:
//       Enter an number for which you want to know weather it is a plindrom or not.
        //input- 121

// Output:
//       - It will print Yes if your no. is palindrom, It will print NOT if Number is not palindrom.
        //Output- 121
// Usage:
//       Compile the program and run it. Enter the as prompted.





#include <iostream>
using namespace std;

int main(){


    int N, test, rev =0;
    cout<<"Enter the no. of which you want the reverse- ";
    cin>>N;
    test= N;

    while(N != 0){

        rev= rev*10+ N%10;
    
        N = N/10;


    }

    if(test == rev)
    cout<<"NO! Number entered by you is a Palindrom Number";
    else
    cout<<"YES! Number entered by you is NOT a Palindrom Number" ;   


    return 0;
}