// Write a C++ program to find the third angle of a triangle.

#include <iostream>
using namespace std;

int main()
{
    float ang1, ang2, ang3;

    cout << "Find the third angle of a triangle :\n";
    cout << "-------------------------------------\n";
    cout << "Enter the 1st angle of the triangle : ";
    cin >> ang1;
    cout << "Enter the 2nd angle of the triangle : ";
    cin >> ang2;

    ang3 = (180 - (ang1 + ang2));

    cout << "The 3rd of the triangle is : " << ang3 << endl;
    cout << endl;

    return 0;
}