//  Convert kilometers per hour to miles per hour :                       
// ----------------------------------------------------                   
//  Input the distance in kilometer : 25                                  
//  The 25 Km./hr. means 15.5343 Miles/hra


#include<iostream>
using namespace std;

int main(){
    float kmph, miph;

    cout << "Convert kilometers per hour to miles per hours :\n";
    cout << "-------------------------------------------------\n";
    cout << "Enter the distance in kilometer : ";
    cin >> kmph;

    miph = (kmph * 0.6213712);

    cout << "The " << kmph << "km./hr."<<" means "<<miph <<" Miles/hr"<<endl;
    cout <<endl;

    return 0;
}