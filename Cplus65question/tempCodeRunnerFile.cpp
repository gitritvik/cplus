// In VS Code 

// Here I was trying to find the armstrong of a no. using Pow function but I got to know that pow funtion return the floating point to overcome this problem use round function see the given code

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int d, num=153, temp, sum=0;
    temp= num;
    for( d= 0; num>0; d++){
        num= num/10;

    }
    cout<<d<<endl;
    cout<<sum<<" "<<temp<<endl;

    for(int i=0; temp>0; i++){
        
        // sum= sum + pow((temp%10), d); // this will give the false result.
    sum= sum + pow((temp%10), d);  // this will give the correct result.
        temp= temp/10;

        cout<<sum<<" "<<temp<<endl;
    }



    cout<<sum;
      
    return 0;
}