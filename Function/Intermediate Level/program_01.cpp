// Write a function that takes an array and prints all even numbers.

#include <iostream>
using namespace std;

void EvenFunction(int arr[], int size)
{
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);  

    EvenFunction(arr, size);  // Call the function

    return 0;
}
