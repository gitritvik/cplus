// 7) Write a Program to Find LCM of two numbers entered
// by user


#include <iostream>
using namespace std;

int main(){

    int num1, num2,max,i;

    cout<<"Enter the First no.- ";
    cin>>num1;
    cout<<"Enter the second no.- ";
    cin>>num2;

    max= (num1>num2)?num1:num2;

    for( i= max; i<= num1*num2; i= i+max){
        if(i%num1==0 && i%num2 == 0)
        break;
    }

    cout<<"Lcm of "<<num1<<" and "<<num2<< " is - "<<i;

    return 0;
}