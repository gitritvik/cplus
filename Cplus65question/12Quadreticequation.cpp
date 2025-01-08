
// // Write a Program which accepts coefficients of a
// // quadratic equation from the user and displays the roots
// // (both real and complex roots depending upon the
// // discriminant).

// Input:
//       - Coefficients a, b, c

// Output:
//       - The roots of the quadratic equation.

// Usage:
//       Compile the program and run it. Enter the coefficients as prompted.


// // Formula used in the equation is - 
// //Sridharaychary formula is used to find the roots of quadretic equation. 

#include <iostream>
#include <cmath>
using namespace std;


int main(){


    double a, b,c, root1, root2, d;

    cout<<"Enter Coffiecent a of the quadretic eqation";
    cin>>a;
    if(a==0)
    cout<<"Coffiecent a is 0, So it can not be a Quadretic equation";
    cout<<"Enter Coffiecent b of the quadretich eqation";
    cin>>b;
    cout<<"Enter Coffiecent c of the quadretich eqation";
    cin>>c;

    d= (b*b)-(4*a*c);
    cout<<"Discriminent of the the given equation is = "<<d<<endl;

    if(d == 0){

        cout<<"Roots are real and same"
        <<endl;
        root1= (-b - (sqrt(d)))/(2*a);
        root2= (-b + (sqrt(d)))/(2*a);

        cout<<"Root1= "<<root1<<endl;
        cout<<"Root2= "<<root2;
        

    }

    else if(d > 0){

        cout<<"roots are real and diffrent"
        <<endl;
        root1= (-b - (sqrt(d)))/(2*a);
        root2= (-b + (sqrt(d)))/(2*a);  

        cout<<"Root1= "<<root1<<endl;
        cout<<"Root2= "<<root2;      

    }

// This part will return the imaginary roots, If equation has imginary roots;


    else if(d<0){
        cout<<"roots are real and diffrent"<<endl;
        double realpart= -b/(2*a);
        double imgpart= sqrt(-d)/(2*a);

        cout<<"Root1= "<<realpart<< " + " << imgpart<<"i"<<endl; 
        cout<<"Root2= "<<realpart<< " - " << imgpart<<"i";

    }



    return 0;
}

