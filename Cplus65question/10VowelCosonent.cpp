// This programm checks that a given charecter is vowel or consonent.


#include <iostream>
using namespace std;

void VC_Find(char c){

    if(c== 'a' || c== 'A'){
        cout<<"This is a vovel";
        

    }
    
    else if(c== 'e' or c== 'E'){
        cout<<"This is a vovel";
    }
   
    else if(c== 'i' or c== 'I'){
        cout<<"This is a vovel";
    }
    
    else if(c== 'o' or c== 'O'){
        cout<<"This is a vovel";

    }
   
    else if (c== 'u' or c== 'U'){
        cout<<"This is a vovel";

    }
   
    else{
        cout<<"This is a consonent";
    }
    
}


int main(){
    char c;
    cout<<"Enter any charecter to find it's vovel or consonent- ";
    cin>>c;
    VC_Find(c);
}