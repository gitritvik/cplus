
// An Armstrong number is a number that is equal to the sum of its digits, each raised to the power of the number of digits. For example, 153 is an Armstrong number because (1 × 1 × 1) + (5 × 5 × 5) + (3 × 3 × 3) equals 153. Another example is 370, where 333 + 777 + 000 equals 370.




#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n,  temp, digit= 0, sum= 0;
    cout<<"Enter the no. for which you want to check wether the given no. is armstront or not? ";
    cin>>n;
    temp= n;

    // this section will count the no. of digits present int the given no.
    while(n>0){
        n= n/10;
        digit= digit+1;
    }

    // Due to devide operator n becomes zero. so we againe initilizing it to the orginal no.
    n= temp;

    //Here we will store the sum of digits each raised to the power of no. of digits 

    for(int i= 0; temp>0; i++){

        sum= sum+ round(pow(temp%10, digit));
        temp= temp/10;


    }
    
 

    if(n == sum)
    cout<<"Given no. is an Armstrong no.";
    else{
        cout<<"Sum of digits of given no., each raisd to the power of no. of digits is not equal to the Givne no. Then this is not an Armstong no.";
    }

    return 0;
}