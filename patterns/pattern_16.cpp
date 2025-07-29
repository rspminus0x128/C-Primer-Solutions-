// ****1
// ***22
// **333
// *4444
// 55555

#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n+1-i; j++)
        {
            cout << "*";
        }
        for (k = 1; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}