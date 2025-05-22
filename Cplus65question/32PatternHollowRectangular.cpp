// 2) Hollow Rectangular star
// *  *  *  *  *
// *            *
// *  *  *  *  *

#include <iostream>
using namespace std;


int main(){

    int i, j, m, n;

    cout<<"Enter the no. of row and no. of column- M and N: ";
    cin>>m>>n;
    cout<<"The hollow Rectangle is Here- "<<endl;

    // I drew a solid star pattern
    // Wrote the (i,j) values of the respecive stars then 
    // find out what logic can be introduced to make it hollow 

    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            if(i== 1 || j== 1 || i== m || j== n){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }


    return 0;
}