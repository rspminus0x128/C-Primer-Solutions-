// Write a function to calculate the sum of two integers.

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "\nSum of two number:" << sum(a, b) << endl;
    cout << endl;

    return 0;
}