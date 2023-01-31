// Reverse a given number.
#include<iostream>
using namespace std;

int main(){
    int i,no,reverse=0,lastDigit;

    cin >> no;
    i = no;
    while(no > 0){
        lastDigit = no % 10;
        reverse = reverse * 10 + lastDigit;
        no /= 10;
    }
    cout << i << endl;
    cout << reverse;
    return 0;
}