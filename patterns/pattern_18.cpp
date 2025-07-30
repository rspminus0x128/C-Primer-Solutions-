#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    int n = 5;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j < n + 1 - i; j++)
        {
            cout << "*";
        }
        for (k = i; k >= 1; k--)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}