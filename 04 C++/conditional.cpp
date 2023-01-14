#include<iostream>
using namespace std;

int main(){
    int no;

    cin >> no;

    if (no > 1000){
        cout << "The number is greater than 1000\n";
    }
    else if(no > 500){
        cout << "The number is greater than 500\n";
    }
    else{
        cout << "The number is less than 500\n";
    }
    return 0;
}