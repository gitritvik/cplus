// #include <iostream>
// #include <string>

// using namespace std;

// // get the avrage of age, given in the array- 
// int main(){


//     float age[] = {45, 25, 34, 32, 25.2, 85, 31.4, 47, 53.2  };
//     double sum= 0, numofelement; 
//     double avg;
//     numofelement= sizeof(age)/sizeof(age[0]);
    


//     for(int i: age){
//         sum= sum + i;
//     }


//     avg= (sum / numofelement);

//     cout<<"Avrage = "<<avg;

       

//     return 0;
// }


#include <iostream>

using namespace std;

int main(){

    int age[7]= {34, 56, 76, 89, 32, 23, 106};
    int big= 0;
    cout<<big<<endl;

    for(int i: age){
        
        if(i > big){

            big= i;

        }
    }


    cout<<"Greatest age= "<<big;



    return 0;
 }