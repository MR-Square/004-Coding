#include<iostream>
using namespace std;

int main(){
    // We will print only odd number between 1 to n;
    int no,i;

    cin >> no;

    cout << "Printing all odd numbers from 1 to " << no << endl;
    for(i = 1; i <= no; i++){
        if(i % 2 == 0)
        continue;
        // continue keyword is used to skip the current iteration of loop.

        cout << i <<endl;
    }

    cout << "Printing last 5 odd numbers from 1 to " << no << endl;
    int counter = 0;
    for(i = no; i >= 1; i--){
        if(counter == 5)
        break;
        // break ekywork is used to terminate the loop.

        if(i % 2 != 0){
            cout << i << endl;
            counter++;
        }
    }
    return 0;
}