// Write a function to check if a number is prime.

#include <iostream>
using namespace std;

int CheckPrimeOrNot(int num);
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (CheckPrimeOrNot(num))
    {
        cout << num << " is prime number.\n";
    }
    else
    {
        cout << num << " is not a prime number.\n";
    }
    return 0;
}

int CheckPrimeOrNot(int num)
{
    if(num <= 1){
        return 0;
    }
 
    for (int i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}