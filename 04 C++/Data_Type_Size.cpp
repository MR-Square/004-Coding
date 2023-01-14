#include <iostream>
using namespace std;

int main() {
    int a;  //declaration
    a = 20; // initialisation

    cout << "size of int is " << sizeof(a) << endl;

    float b;
    cout << "size of float is " << sizeof(b) << endl;
    
    cout << "size of bool is " << sizeof(bool) << endl;

    cout << "size of short int is " << sizeof(short int) << endl;
    
    cout << "size of long int is " << sizeof(long int) << endl;

    return 0;
}
