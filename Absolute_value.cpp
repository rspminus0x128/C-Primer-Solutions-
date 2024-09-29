// Take intger and print the absolute value of the integer 
#include<iostream>
using namespace std;

int main() 
{
    float n;
    cout<<"Enter the Number :";
    cin>>n;
    if(n>0){
        cout<<n; 
    }
    else 
    {
        n=-n;
        cout<<n;
    }
    return 0;
    
}