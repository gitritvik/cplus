// 1) Solid Rectangular star 

// * * * * *
//  * * * * *
//  * * * * *


// Input:
//       Enter Two numbers to print pattern of star in M X N manner.
        //input- 5, 6

// Output:
//       - IT will print Pattern of Stars in Row X column Manner
        //Output- yes
// Usage:
//       Compile the program and run it. Enter the as prompted.

#include <iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"To print a Pattern in row(m) X coulum(n) Please Enter the value of M  and N : ";
    cin>>m>>n;
        

    for(int i=0 ; i<m; i++){
        cout<<endl;
        for(int j= 0; j<n; j++){
            cout<<" * "; 
        }
    }


    return 0;
}