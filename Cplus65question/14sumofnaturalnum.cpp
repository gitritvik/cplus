// Program to Calculate the Sum of the First N Natural Numbers
// 
// Input:
//       Enter the number (N) up to which you want the sum of natural numbers.
//
// Output:
//       Returns the sum of the first N natural numbers.
//
// Usage:
//  
#include <iostream>
using namespace std;

int main(){


    int num, sum=0;
    cout<<"Enter the no. till where you want the sum of natural no.- "; // takes input from the user
    cin>>num;

    if(num<= 0){

        cout<<"Enter a natural no. any no.<= 0 is not a natural no.";

    }

    else{

    for(int i= 1; i<=num; i++){
        sum= sum+i;
    }

    
    cout << "The sum of the first " << num << " natural numbers is: " << sum << endl;

    }
    

    return 0;
}