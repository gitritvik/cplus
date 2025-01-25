// 14) Write a Program to Display Prime Numbers Between
// Two Intervals (entered by user)
// Example:
// Enter two numbers: 0 20
// Prime numbers between 0 and 20 are:
// 2 3 5 7 11 13 17 19


#include <iostream>
using namespace std;

int main(){

    int n1, n2;

    cout<<"Enter the First limit- ";
    cin>>n1;
    cout<<"Enter the Second limit- ";
    cin>>n2;

     

    for(n1; n1<=n2; n1++){
       
        for(int j= 2; j<=(n1/2); j++){
            if(n1%j==0){

               
                 
            }

            cout<<n1<<", ";
        }
    }

    

    return 0;
}