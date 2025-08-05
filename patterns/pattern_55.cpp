// 55555
//  ****
//   333
//    **
//     1

#include <iostream>
using namespace std;

int main()
{

    int i, j;
    int n = 5;

    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= 1; j--)
        {
            if (i >= j)
            {
                if (i % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << i;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}