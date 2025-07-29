// 55555
// 4444*
// 333**
// 22***
// 1****

#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    int n = 5;

    for (i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        for (k = 1; k < n + 1 - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}