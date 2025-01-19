// 6) Write a Program to Find GCD or HCF of two numbers
// entered by user



#include <iostream>
using namespace std;

int main(){


    int num1, num2, dvend, divsr, remdr;

    cout<<"Enter the first no- ";
    cin>>num1;
    cout<<"Enter the second no.- ";
    cin>>num2;


    if(num1>num2){
    dvend= num1;
    divsr= num2;
    }
    else{
    dvend= num2;
    divsr= num1;  
    }

    cout<<"dvend=  "<<dvend<<endl;
    cout<<"divsr= "<<divsr<<endl;

    // remdr = dvend%divsr;

    // cout<<"remdr == "<<remdr<<endl;
    

    for(remdr=0; remdr==0;remdr = dvend%divsr ){

        dvend= divsr;
        divsr= remdr;

    
    cout<<"dvend=  "<<dvend<<endl;
    cout<<"divsr= "<<divsr<<endl;
    }


    cout<<"HCF is- "<<remdr;   
    
    
    return 0;
}