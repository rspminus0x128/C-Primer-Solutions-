// 12345
// ****
// 123
// **
// 1

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 5;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}