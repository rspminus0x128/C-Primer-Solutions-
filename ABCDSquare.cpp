#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the number of terms : ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int b = 64 + a;
            char ch = (char)b;
            cout<<" "<< ch;
            a++;

        }
        cout<<endl;
    }
}