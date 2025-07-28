// Write a C++ program that calculates the volume of a cube.

#include<iostream>
using namespace std;

int main(){
     int side;
     int vol_cube;

    cout << "\nCalculate the volume of a cube:\n";
    cout << "--------------------------------\n";
    cout << "Input the side of a cube : ";
    cin  >> side;

    vol_cube = side * side * side;

    cout << "The volume of a cube is : " << vol_cube <<endl;

    return 0;

}