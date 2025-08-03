//  Print the name in reverse where last name comes first:
// -----------------------------------------------------------
//  Input First Name: Alexandra
//  Input Last Name: Abramov
//  Name in reverse is: Abramov Alexandra

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fname, lname;

    cout << "Input First Name: ";
    cin >> fname;

    cout << "Input Last Name: ";
    cin >> lname;

    cout << "Name in reverse is: " << lname <<" "<< fname << endl;

    return 0;
}
