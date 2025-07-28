// Write a C++ program to find the area of any triangle using Heron's formula.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float side1, side2, side3, semi_peri, area;

    cout << "Find the area of any triangle using Heron's Formula:\n";
    cout << "----------------------------------------------------\n";
    cout << "Enter the length of 1st side of the triangle : ";
    cin >> side1;
    cout << "Enter the length of 2nd side of the triangle : ";
    cin >> side2;
    cout << "Enter the length of 3rd side of the triangle : ";
    cin >> side3;

    semi_peri = (side1 + side2 + side3) / 2;
    area = sqrt(semi_peri * (semi_peri - side1) * (semi_peri - side2) * (semi_peri - side3));

    cout << "The area of the triangle is : " << area << endl;
    cout << endl;

    return 0;
}