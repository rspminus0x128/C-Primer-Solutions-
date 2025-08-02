// Compute the total and average of four numbers :
// ----------------------------------------------------
//  Input 1st two numbers (separated by space) : 25 20
//  Input last two numbers (separated by space) : 15 25
//  The total of four numbers is : 85
//  The average of four numbers is : 21.25

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, tot, avg;
    cout << " Compute the total and average of four numbers :\n";
    cout << "--------------------------------------------------\n";
    cout << "Input 1st two numbers (separated by space) : ";
    cin >> n1 >> n2;
    cout << "Input last two numbers (separated by space) : ";
    cin >> n3 >> n4;

    tot = n1 + n2 + n3 + n4;
    avg = tot / 4;

    cout << "The average of four number is : " << avg << endl;

    return 0;
}