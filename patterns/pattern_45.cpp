// 5*5*5
// 4*4*
// 3*3
// 2*
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
            if (j % 2 ==0)
            {
                cout <<"*";
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}