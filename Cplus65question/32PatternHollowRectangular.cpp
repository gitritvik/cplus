// 2) Hollow Rectangular star
// *  *  *  *  *
// *            *
// *  *  *  *  *



#include <iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"To print a Pattern in row(m) X coulum(n) Please Enter the value of M  and N : ";
    cin>>m>>n;

    for(int i= 0; i<m; i++){
        cout<<endl;
        for(int j= 0; i<n; i++){
            if((i==1 || i== (m-1)) && (j==1 || j == (n-1)) ){
                cout<<" * ";
            }
            else{
                break;
            }
        }
    }

    




    return 0;
}