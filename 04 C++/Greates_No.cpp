// Finding greates number among 3 numbers.
#include<iostream>
using namespace std;

int main(){
    int no1,no2,no3;

    // Taking all three numbers from user.
    cin >> no1 >> no2 >> no3;

    if(no1 > no2){
        if(no1 > no3){
            cout << "Greatest no is " << no1;
        }
        else{
            cout << "Greates no is " << no3;
        }
    }
    else if(no2 > no3){
        cout << "Greates no is " << no2;
    }
    else{
        cout << "Greates no is " << no3;
    }

    return 0;
}