// In this we will not see every operator.

#include<iostream>
using namespace std;

int main(){
    
    // Left shift operator
    int lso = 4 << 1;
    /*
    4 << 1
    means shift the 1's toward the left by 1 place.
    4 = 0100 
    after applying 4 << 1, it will bocome
    1000 i.e 8
    
    4 << 2
    means shift the 1's toward left by 2 places
    4 = 00100
    after the operation, it will become
    10000 i.e 16

    In general,
    a << n --> a * 2^n
    */
    cout << lso << endl;


    // Right Shift operator
    int rso = 4 >> 1;
    /*
    4 >> 1
    means shift the 1's toward the right by 1 place.
    4 = 0100 
    after applying 4 >> 1, it will bocome
    0010 i.e 2
    
    4 >> 2
    means shift the 1's toward right by 2 places
    4 = 00100
    after the operation, it will become
    00001 i.e 1

    In general,
    a >> n --> a / 2^n
    */
    cout << rso << endl;

    // Ternary operator
    /*
    z = (condition)?x:y;
    RHS will return x if condition is true otherwise return y.
    */
    int a,b;
    cin >> a >> b;
    int ans = (a > b)?a:b;
    cout << "Greate number is " << ans << endl;
    return 0;
}