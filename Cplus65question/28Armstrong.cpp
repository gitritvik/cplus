#include <iostream>
#include <cmath>

using namespace std;

int main(){


    int num, i= 0, sum= 0;
    cout<<"Enter a no.- ";
    cin>>num;

    for(i; num > 0; i++){
        num= num/10;
        sum= sum + pow(num, i);
    }
    cout<<i;

    while(num%10 )
    
    return 0;
}