// Checking wheather the given no is even or odd.
#include<iostream>
using namespace std;

int main(){
    int no;

    cin >> no;

    if(no % 2 == 0){
        cout << no << " is even";
    }
    else{
        cout << no << " is odd";
    }
}