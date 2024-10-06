// Take positive integer input and tell if it is even or odd 
#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number : ";
    cin>>n;
    if(n%2==0){            // check the condtion is true or not if it is ture then you can enter  
        cout<<"The number is even";
    }                      // if condition false the we will reach at else and print odd number
    else{ 
        cout<<"The number is odd ";
    }
}