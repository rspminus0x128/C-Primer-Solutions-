
#include <iostream>
using namespace std;

int main()
{
    float fah, cel;

    cout << "Convert temperature in Fahrenheit to Celsius :\n";
    cout << "-----------------------------------------------\n";
    cout << "Enter the temperature in Fahrenheit :\n";
    cin >> fah;

    cel = ((fah * 5.0) - (5.0 * 32)) / 9;

    cout << "The temperature in Fahrenheit : " << fah << endl;
    cout << "The temperature in Celsius : " << cel << endl;
    cout << endl;

    return 0;
}