// 3) Write a Program to Generate Multiplication Table of a
// number (entered by the user) using a for loop.


// Input:
//       - Enter the No. for whcih you want the multiplicaion table; 

// Output:
//       - Prgoram return the multiplication table as output Weather it is a decimal  or integer number

// Usage:
//       Compile the program and run it. Enter the non- negatvie no. as prompted.






#include <iostream>
using namespace std;

int main(){

 double num;

 cout<<"Enter the number for which you want the multiplication tabel- ";
 cin>>num;
 cout<<"Your mulitplicaiton table is- "<<endl<<endl;

 for(int i= 0; i<=10; i++){

    cout<<num <<" X " << i <<" =   "<<num*i<<endl;
 }
return 0;
}
