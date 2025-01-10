// Write a Program to Display Fibonacci Series upto nth
// term (n is entered by user)



// Input:
//       - Enter the term No. upto where you want the Fibonacci Series-  ; 

// Output:
//       - It will print the Fiboacnni series.
// Usage:
//       Compile the program and run it. Enter the non- negatvie no. as prompted.




#include <iostream>
using namespace std;

int main(){

    int N, num1=0, num2= 1, sum;

    cout<<"Enter the term N till where you want to find the fibonacci series- ";
    cin>>N;
    cout<<"Fibonacci Series is: ";
    

    for(int i=1; i<=N; i++){


        
        if(i==1)
        cout<<num1<<", ";
        else if(i==2)
        cout<<num2<<", ";

        else{
            sum= num1+num2;
            cout<<sum<<", ";

            num1= num2;
            num2= sum;

        }

        
    }
    return 0;
}


