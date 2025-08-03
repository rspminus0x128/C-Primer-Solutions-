//   Print the area and perimeter of a rectangle:                          
// ----------------------------------------------                         
//  Input the width of the rectangle: 8.5                                 
//  Input the height of the rectangle: 5.6                                
// The area of the rectangle is: 47.6                                     
// The perimeter of the rectangle is: 28.2

#include <iostream>
using namespace std;

int main(){
    float arr,peri,width, height;

    cout << "\nPrint the area and perimeter of a rectangle:\n";
    cout << "-----------------------------------------------\n";
    cout << "Input the width of the rectangle: ";
    cin >> width;
    cout << "Input the height of the rectangle: ";
    cin >> height; 

    arr = width * height;
    peri = 2 * ( width + height);

    cout << "The area of the rectangle is: " << arr << endl;
    cout << "The perimeter of the rectangle is: " << peri <<endl;

    return 0;
}