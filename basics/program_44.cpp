// Calculate the volume of a sphere :                                    
// ---------------------------------------                                
//  Input the radius of a sphere : 5                                      
//  The volume of a sphere is : 523.333

#include <iostream>
using namespace std;

int main(){

    float radius,volsp;

    cout << "Calculate the volume of a sphere:\n";
    cout <<"-----------------------------------\n";
    cout << "Input the radius of a sphere : ";
    cin >> radius;
    
    volsp = (4 * 3.14 * radius * radius * radius) /3; 

    cout << "The volume of a sphere is : " <<volsp << endl;
    cout << endl;

    return 0;
}