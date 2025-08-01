// 1
// **
// 333
// ****
// 55555

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << i;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}