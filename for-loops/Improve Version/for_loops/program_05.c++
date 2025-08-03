#include<iostream>
#include<stdbool.h>

using namespace std;


int main(){

    int num;
    bool std = true;

    cout << "Enter a number to check prime or not : "<< endl;
    cin >> num;

    for (int i = 2;i<num/2;i++){

        if(num % i ==0){
            std = false;
            break;
        }
    }

    if(std == true){
        cout << "This number is prime number."<< endl;
    }
    else{
        cout << "This number is not a prime number."<< endl;
    }
    
    return 0;
}