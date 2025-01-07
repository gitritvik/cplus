// Find that no. is odd or even;


#include <iostream>
using namespace std;

//function to find no. is even or odd

void oddeve(int a){
    
    if(a%2 == 0)
    cout<<"Entered no. is even";
    else 
    cout<<"Entered no. is Odd";
  
}


int main(){

    int a;
    cout<<"Enter any no. find out weather it is even or odd- ";
    cin>>a;
    oddeve(a);
    return 0;
}
