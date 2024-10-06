#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                int b = 64 + a;
                char ch = (char)b;
                cout << ch;
                a++;
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
}
