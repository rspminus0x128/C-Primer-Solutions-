// Write a in C++ program to find the size of fundamental data types.

#include<iostream>
using namespace std;

int main(){

    cout << "\n\nFind Size of fundamental data type :\n";
    cout << "---------------------------------------\n";
    cout << "The sizeof(char) is : "<<sizeof(char)<<" byte\n";
    cout << "The sizeof(short) is: "<<sizeof(short)<<" byte\n";
    cout << "The sizeof(int) is: " <<sizeof(int) <<" byte\n";
    cout << "The sizeof(long) is: "<<sizeof(long)<<" byte\n";
    cout<<  "The sizeof(long long) is: "<<sizeof(long long)<<" byte\n";
    cout<<  "The sizeof(float) is :" << sizeof(double) << " byte\n";
    cout<<  "The of (long double) is: "<< sizeof(long double) <<" byte\n";
    cout << "The sizeof(bool) is: " << sizeof(bool) << sizeof(bool) << " byte.\n";

    return 0;
}