// ****A
// ***BB
// **CCC
// *DDDD
// EEEEE

#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >=1; j--)
        {
            if (j > i)
            {
                cout << "*";
            }
            else
            {
                cout << char(i + 64);
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}