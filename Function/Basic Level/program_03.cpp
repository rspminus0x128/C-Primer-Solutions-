// Write a function to find the factorial of a number.


#include <iostream>
using namespace std;

int  FactorialFun(int num);
int main(){
    
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int result = FactorialFun(num);
    cout << "Factorial of "<< num << " is " << result;
    return 0; 
}

int  FactorialFun(int num){
    int fact = 1;

    for(int i =1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}