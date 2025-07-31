//  * 1 * 2 *
//  3 * 4 * 5
//  * 6 * 7 *
//  8 * 9 *10
//  *11 *12 *

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i, j;
    int x = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {

            if ((i + j) % 2 == 1)
            {
                cout << x++ << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}