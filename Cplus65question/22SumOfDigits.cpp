// 9) Write a Program to display sum of all digits of a given
// Number N by user


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