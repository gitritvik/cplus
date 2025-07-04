
// BattleShip game- 

#include <iostream>
using namespace std;

int main(){


    int ship[4][4]= {
        {1, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    };

    int torpidos= 4;
    int row, col, hitCount=0, Eship=4;
    
   cout<<"\n\nThere is some Enemey in the sea and we don't know the exact coordinates, but we know that \n they under a  4 X 4 grid\n we have only 4 torpidos using which you have to destroy them and have to guess the excat cordinates and fire the torpidos- \n\n";


    while(torpidos>0){
        
        cout<<"\nTotal Enemey ships- "<<Eship-hitCount;
        cout<<"\nTotal ships you have hit- "<<hitCount;

        cout<<"\nEnter the row coordinate between 0-3 - ";
        cin>>row;
        cout<<"\nEnter the column coordinate between 0-3 - ";
        cin>>col;

        if(ship[row][col] == 1){
            cout<<"\nHurray! You have hit the ship";
            ship[row][col] = 0;
            hitCount++;

        }

        else{
            cout<<"\nSorry capton You could not hit the ship";
        }

        torpidos--;
        if(torpidos>0){
            cout<<"\n We have "<<torpidos<<" topidos left.";
        }
        else{
            
            cout<<"\nOOPS! We are out of Torpidos.";

        }

    }

    
}