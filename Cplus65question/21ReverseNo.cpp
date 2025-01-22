//Write a Program to Reverse a given Number N by user


// Input:
//       - Enter the Number of which you want the Reverse-  ; 
        //input- 5678

// Output:
//       - It will print Reverse of the number.
        //Output- 8765
// Usage:
//       Compile the program and run it. Enter the non- negatvie no. as prompted.



#include <iostream>
using namespace std;

int main(){

    int N, rev= 0;

    cout<<"Enter the of which you want the Reverse- ";
    cin>>N;
    
    while(N != 0){
        rev= rev + (N%10);
        rev= rev*10;
        N= N/10;
    }

    cout<<"Revrse is- "<<rev/10;

    return 0;
}

