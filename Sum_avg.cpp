//Write a C++ program to calculate simple interest. The formula is simple interest
// = (Principal * Rate * Time) / 100

 #include<iostream>
 using namespace std;
 
 int main (){
    int principal , time;
    float rate ;
    float simple_interest;
    cout<<"Enter the principal amount :"<<endl;
    cin>>principal;
    cout<<"Enter the rate of interest :"<<endl;
    cin>>rate;
    cout<<"Enter the time in years "<<endl;
    cin>>time;
     simple_interest = (principal*rate* time)/100;
    cout<<"The simple interest is "<<simple_interest;
     return 0;
 }

 
