// Write a C++ program that calculates the volume of a cylinder.

#include <iostream>
using namespace std;

int main()
{

    int rad, height;
    float vol_cylinder;

    cout << "Calculate the volume of a cylinder:\n";
    cout << "----------------------------------\n";
    cout << "Input the radius of the cylinder : ";
    cin >> rad;
    cout << "Input the height of the cylinder : ";
    cin >> height;
    
    vol_cylinder = (3.14 * rad * rad * height);

    cout << "The volume of a cylinder is : " << vol_cylinder << endl;
    cout << endl;

    return 0;
}