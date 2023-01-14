// Sum all the numbers from 1 to n.
#include<iostream>
using namespace std;

int main(){
    int i,no,sum=0;

    cin >> no;

    // For loop.
    for(i = 1;i <= no; i++){
        sum += i;
    }
    cout << "Sum of 1 to " << no << " is " << sum << endl;

    int temp = no;
    sum = 0;

    // While loop.
    while(temp > 0){
        sum += temp;
        temp--; 
    }
    cout << "Sum of 1 to " << no << " is " << sum << endl;

    // Do while loop.
    temp = no;
    sum = 0;
    
    do{
        sum += temp;
        temp--;
    }while(temp > 0);
    cout << "Sum of 1 to " << no << " is " << sum;
    
    return 0;
}