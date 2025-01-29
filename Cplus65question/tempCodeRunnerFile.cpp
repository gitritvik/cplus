#include <iostream>

using namespace std;


int main(){

    int num1, num2;
    bool isPrime=true;

    cout<<"Enter the First limit- ";
    cin>>num1;
    cout<<"Enter the second limit- ";
    cin>>num2;

    for(num1; num1<= num2; num1++){

        
        
        for(int j=2; j<= num1; j++){
            
            if(num1%j==0){
                isPrime= false;
                break;

            }
            
            isPrime=true;
           
        }
        
        if(isPrime == true){
            cout<<num1<<", ";
        }

    }  



    return 0;
}