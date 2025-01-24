// 13) Write a Program to Check Whether a Number is Prime
// or Not


#include<iostream>

using namespace std;

int main(){

    int N;

    cout<<"Entered  a no. to get to know that Entred no. is prime or not- ";
    cin>>N;

    if(N<=0 || N== 1){
        cout<<"Please Enter a No. greater than 1";
    }

    else{


        // If a number has a divisor greater than n/2, it must also have a divisor less than or equal to n/2. This optimization reduces the number of iterations required.

        for(int i= 2; i<=N/2; i++){
            if(N%i == 0){
                cout<<"This no. is not Prime";
                return 0;

            }

    }

    cout<<"This no. is Prime no.";
    }

    return 0;
}