//Write a Program to Reverse a given Number N by user


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

