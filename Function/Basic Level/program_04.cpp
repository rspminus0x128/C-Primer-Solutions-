// Write a function to return the square of a number.

#include <iostream>
using namespace std;

int SquareFunc(int num);
int main()
{
  int num ;
  cout << "Enter the number: ";
  cin >> num;

  cout << "square of "<< num << " is " << SquareFunc(num);
  return 0;
}

int SquareFunc(int num)
{
    return num * num ;
}