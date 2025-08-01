 // 1 2 3 4 *
 // 1 2 3 * 5
 // 1 2 * 4 5
 // 1 * 3 4 5
 // * 2 3 4 5


#include<iostream>
using namespace std;

int main(){
    
    int i,j,k;
    int n = 5;

    for(i = 1; i <= 5; i++){
        for(j = 1;j <=n; j++){
            if(j== n+1-i){
                cout <<"*";
            }
            else{
                cout<< j;
            }
        }
        cout<< endl;
    }
    cout << endl;

    return 0;
}