// 1****
// 12***
// 123**
// 1234*
// 12345

#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (k = 1; k <= n - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;

}