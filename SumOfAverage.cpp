//Write a C++ program that takes N numbers as input and calculates their average.
#include <iostream>
using namespace std;

int main(){
    int N;
    double  sum = 0.0,number;

    cout<<"Enter the element  count: ";
    cin>>N;

    for(int i=0 ;i<N;i++){
        cout<< "Enter the number  "<<i+1<<": ";
        cin>>number;
        sum +=number;
    }
    if(N>0){
        cout<<"Average is "<<sum/N<<endl;
    }
    else{
        cout<<"No numbers to calculate average"<<endl;
    }
    return 0;
}