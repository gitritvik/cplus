// program to swap two variable -


//method 1-  



// #include <iostream>
// using namespace std;

// void swap(int a, int b, int c){

//     c= a;    
//     a= b;
//     b= c;

//     cout<<"After swaping- "<<endl;
//     cout<<"a= "<<a<<endl;
//     cout<<"b= "<<b<<endl;
// }

// int main(){

//     int a= 89, b= 77, c;

//     cout<<"Before swaping- "<<endl;
//     cout<<"a= "<<a<<endl;
//     cout<<"b= "<<b<<endl;
    


//     swap(a,b,c);    

//     return 0;
// }


// method 2(without 3rd variable)-

#include <iostream>
using namespace std;


void swap(int a, int b){

    a= a+b;
    b= a-b;
    a= a-b;

    cout<<"After swaping- "<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    
}

int main(){

    int a= 5, b= 10;

    cout<<"Before swaping- "<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    swap(a, b);





    return 0;
}