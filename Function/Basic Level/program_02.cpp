// Write a function to find the maximum of two numbers.

#include <iostream>
using namespace std;

int max(int x, int y);
int main()
{

    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Maximum of two numbers: " << max(a, b) << endl;
    cout << endl;
}

int max(int x, int y)
{

    if (x > y)
    {
        return x;
    }
    else if (x == y)
    {
        return 0;
    }
    else{
        return y;
    }
}