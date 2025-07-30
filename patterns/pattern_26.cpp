// EEEEE
// *DDDD
// **CCC
// ***BB
// ****A

#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    int n = 5;

    for (i = n; i >=1; i--)
    {
        for (j = n; j >= 1; j--)
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