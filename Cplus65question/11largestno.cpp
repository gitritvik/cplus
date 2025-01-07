// Write a Program to Find Largest Number Among Three
// Numbers entered by users


#include <iostream>
using namespace std;

//logic to find the gretest no.

void find_gretest(int num1, int num2, int num3){
    if(num1> num2 && num1> num3){
        cout<<num1<<" is the gretest no.";

    }
    else if(num2> num1 && num2> num3){
        cout<<num2<<" is the gretest no.";
    }

    else{
        cout<<num3<<" is the gretest no.";

    }
}


int main(){

    int num1, num2, num3;
    cout<<"Enter first no.- "<<endl;
    cin>>num1;
    cout<<"Enter second no- "<<endl;
    cin>>num2;
    cout<<"Enter third no.- "<<endl;
    cin>>num3;
    
    find_gretest(num1, num2, num3);



    return 0;
}

