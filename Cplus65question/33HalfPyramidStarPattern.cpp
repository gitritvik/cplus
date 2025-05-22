// 3) Half Pyramid Star Pattern  
// *
//  * *
//  * * *
//  * * * *
//  * * * * *


#include <iostream>
using namespace std;

int main(){

    int i, j, h;
    cout<<"Enter the Highet of the pyramid You want- ";
    cin>>h;

    cout<<"Here is Your Pyramid- ";
    cout<<endl;


    //  Took two variable i and j;
    // I denotes the row no. whereas j denotes the no. of starts in the row;
    // Made i==j 
    

    for(i=1; i<=h; i++){
        for(j=1; j<=i; j++){
        cout<<" * ";
        }
        
        cout<<endl;

    }



    return 0;
}