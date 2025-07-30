// ****1
// ***21
// **321
// *4321
// 54321

#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    int n = 5;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            if (j > i)
            {
                cout <<"* ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}