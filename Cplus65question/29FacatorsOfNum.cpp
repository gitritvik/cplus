// 16) Write a Program to Display all Factors of a Number
// entered by User

// Input:
//       Enter an number for which you want the Factors.
        //input- 60

// Output:
//       - It will print all the factors of a given no.
        //Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60
// Usage:
//       Compile the program and run it. Enter the as prompted.



#include <iostream>
using namespace std;

int main(){

    int num; 

    cout<<"Enter the no. of Which you want the Factor- ";
    cin>>num;
    cout<<"Factors of given no are- ";


    for(int i=1; i<= num/2; i++){
        if(num % i == 0 ){
            cout<<i<<" ";
        }

        
       
    }
    
    cout<< num;


    return 0;
}