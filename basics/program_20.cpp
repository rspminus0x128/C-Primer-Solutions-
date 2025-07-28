
#include <iostream>
using namespace std;

int main()
{
    float cel, fah;

    cout << "Convert temperature in Celsius to Fahrenheit :\n";
    cout << "-----------------------------------------------\n";
    cout << "Enter the temperature in Celsius : ";
    cin >> cel;

    fah = (cel * 9.0) / 5.0 + 32;

    cout << "The temperature in Celsius : " << cel << endl;
    cout << "The temperature in Fahrenheit : " << fah << endl;
    cout << endl;

    return 0;
}