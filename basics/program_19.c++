// Write a C++ program to find the area and circumference of a circle.

#include<iostream>
using namespace std;

int main(){
    float radius ,area,circum;

    cout << "Find the area and circumference of any circle:\n";
    cout << "----------------------------------------------\n";
    cout << "Enter the radius of  a circle : ";
    cin >> radius;
    
    area = (3.14 * radius * radius);
    circum = (2 * 3.14 * radius);

    cout << "The area of the circle is: "<<area <<endl;
    cout <<"The circumference of the circle is : "<<circum <<endl;
    cout <<endl;
    
    return 0;
}
