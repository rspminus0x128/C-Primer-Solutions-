// Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.

#include <iostream>
using namespace std;

int main()
{

    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            if (j == 1 || i == n || j == n || i == 1)
            {
                cout << "5";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}