//  4) Inverted Half pyramid
//  * * * * * *
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

#include <iostream>
using namespace std;

int main(){


    int i, j, h, m;

    cout<<"Enter the hight of the Pramid- ";
    cin>>h;
    m=h;

    cout<<"Your Half Inverted Pyramid is ready here- "<<endl;
    
    // I to print the no. star in the first row equals to the height of the pyramid
    // then decrease one by one 
    // for that I took another variable, 
    // 

    for(i=1; i<= h; i++){
        for(j=1; j<=m; j++){
            cout<<" * ";
        }

       
        cout<<endl;
         m=m-1;

        
    }

    return 0;
}