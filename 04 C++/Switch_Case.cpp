#include <iostream>
using namespace std;

int main()
{
    int day;

    cin >> day;

    switch (day)
    {
    case 1:
        cout << "First day of week is Monday" << endl;
        break;
    case 2:
        cout << "Second day of week is Tuesday" << endl;
        break;
    case 3:
        cout << "Third day of week is Wednessday" << endl;
        break;
    case 4:
        cout << "Fourth day of week is Thursday" << endl;
        break;
    case 5:
        cout << "Fifth day of week is Friday" << endl;
        break;
    case 6:
        cout << "Sixth day of week is Saturday" << endl;
        break;
    case 7:
        cout << "Sevent day of week is Sunday" << endl;
        break;

    default:
        cout << "Please enter the number between 1 to 7 only\n";
        break;
    }
    return 0;
}