// Write a function to print your name 5 times.


#include <iostream>
using namespace std;

void PrintFunc( string name);
int main()
{
    string name;
    cout << "Enter the name: ";
    cin >> name;

    PrintFunc(name);
    return 0;
}

void PrintFunc( string name){

    for(int i = 1; i <= 5; i++)
    {
        cout << name << endl ;
    }
}