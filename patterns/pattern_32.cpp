// * 0 0 0 * 0 0 0 *
// 0 * 0 0 * 0 0 * 0
// 0 0 * 0 * 0 * 0 0
// 0 0 0 * * * 0 0 0
// 0 0 0 0 * 0 0 0 0

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < 2 * n; j++)
        {
            if (j == i || j == 2 *n - i ||j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}