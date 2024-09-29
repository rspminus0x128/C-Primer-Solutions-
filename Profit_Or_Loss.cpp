 // THIS PROGRAM CHECK ARE IN PROFIT OR LOSS 
#include <iostream>
using namespace std;

int main()
{
    float cost, sell, result;
    cout << "Enter the cost of item : ";
    cin >> cost;
    cout << "Enter the sell of item : ";
    cin >> sell;
    if (sell > cost)
    {
        result = sell - cost;
        cout << "We are in profit : " << result;
    }
    else if (sell == cost)
    {
        result = sell - cost;
        cout << "We are not in profit or loss  : " << result;
    }
    else
    {
        result = cost - sell;
        cout << "we are in loss : " << result;
    }
    return 0;
}