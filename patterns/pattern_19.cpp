#include<iostream>
using namespace std;

int main(){

    int i,j,k;
    int n = 5;

    for (i =1; i<=5; i++){

        for(j=1; j<i; j++){
            cout << "* ";
        }
        for(k=n+1-i; k>=1; k-- ){
            cout << k << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}