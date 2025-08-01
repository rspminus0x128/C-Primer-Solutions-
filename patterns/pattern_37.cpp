// 1
// **
// 123
// ****
// 12345

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 5;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << j;
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