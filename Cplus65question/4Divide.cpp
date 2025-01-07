// Write a program where the user is asked to enter two
// integers (divisor and dividend) and the quotient and the
// remainder of their division is computed.(Both divisor and
// dividend should be integers.)
// Program using function

#include <iostream>
using namespace std;

 int rem (int divisor, int dividend){  // function to return remeinder
        return dividend % divisor;

 }

 int divi(int divisor, int dividend){ // function to return divisor
        return dividend / divisor;

 }



int main(){
    int divisor, dividend, remainder, division;

    //taking input

    cout<<"Enter the divisor- "<<endl;
    cin>>divisor;
    cout<<"Enter the divedend- "<<endl;
    cin>>dividend;
    
    //calling function and storing the output to show to the user
   remainder=  rem(divisor, dividend);
   division =  divi(divisor, dividend);

   cout<<"The reminder is - "<<remainder<<endl;
   cout<<"The division is- "<<division<<endl;

    
    return 0;
}

