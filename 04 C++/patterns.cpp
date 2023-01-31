#include<iostream>
using namespace std;

int main(){
    int row,col;
    int i,j;

    /*
    // Inverted Half Pyramid
    cin >> row;
    for(i = row;i >= 1;i--){
        for(j = 1; j<= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    */

    /*
    // Inverted Half Pyramid after 180 deg ratation
    cin >> row;
    for(i = 1; i <= row; i++){
        for(j = row - i; j >= 1; j--){
            cout << " ";
        }
        for(j = 1 ; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    // second way
    cin >> row;
    for(i = 1; i <= row; i++){
        for(j = 1; j <= row; j++ ){
            if(j <= row-i)
            cout << " ";
            else
            cout << "*";
        }
        cout << endl;
    }
    */

    /*
    // Print Star in secondary diagonal
    for(i = 1; i <= row; i++){
        for(j = 1; j <= row; j++ ){
            if(j == row-i)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
    */
    

    return 0;
}