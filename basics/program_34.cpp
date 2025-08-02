//  Check whether a number is positive, negative or zero :
// -----------------------------------------------------------
//  Input a number : 8
//  The entered number is positive.

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Check whether a number is positive,negative or zero :\n";
    cout << "------------------------------------------------------\n";
    cout << "Input a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The entered number is positive.";
    }
    else if (num < 0)
    {
        cout << "The entered number is negative.";
    }
    else
    {
        cout << "The entered number is zero.";
    }

    return 0;
}