// Write a C++ program to find the Area and Perimeter of a Rectangle.

#include <iostream>
using namespace std;

int main()
{

    int length, width;
    float area_rect, peri_rect;

    cout << "Find the Area and Perimeter of a Rectangle :\n";
    cout << "--------------------------------------------\n";
    cout << "Enter the length of the rectangle : ";
    cin >> length;
    cout << "Enter the width of the rectangle : ";
    cin >> width;

    area_rect = (length * width);
    peri_rect = 2 * (length + width);

    cout << "The area of the rectangle is : " << area_rect << endl;
    cout << "The perimeter of the rectangle : " << peri_rect << endl;
    cout << endl;

    return 0;
}