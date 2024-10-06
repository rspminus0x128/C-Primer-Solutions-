//Write a C++ program to calculate the area of a circle. Use the formula
//A = πr^2
#include<iostream>
using namespace std;

int main (){
    float  radius, area;
    float pi=3.14;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    area = pi * radius *  radius;
    cout<<"The area of the circle is: "<<area;
     return 0;
}