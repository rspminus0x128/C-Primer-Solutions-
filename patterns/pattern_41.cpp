// #*#*#
// #*#*
// #*#
// #*
// #

#include <iostream>
using namespace std;

int main()
{

    int i, j;
    int n = 5;

    for (int i = 1; i <= 5; i++)
    {
        for (j = 1; j <= n + 1 - i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}