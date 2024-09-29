#include<iostream>
using namespace std;

int  main (){
    float length ,  width , area ,perimeter;
    cout << "Enter the length of the rectangle: ";
    cin >> length ;
    cout << "Enter the width of the rectangle: ";
    cin >> width ;
    area = length * width ;
    perimeter =2 *(length +  width) ;
    if(area>perimeter)
    {
        cout << "The area of the rectangle is greater than the perimeter : "<<area ;
    }
    else{
        cout << "The perimeter of the rectangle is greater than the area."<<perimeter ;
    }
     
}