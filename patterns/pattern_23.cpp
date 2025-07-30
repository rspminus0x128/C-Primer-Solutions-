// ABCDE
 // ABCD*
 // ABC**
 // AB***
 // A****

 #include <iostream>
 using namespace std;

 int main(){

    int i,j,k;
    int n = 5;

    for (i = n; i >=1; i--){
        for(j =1; j<= 5;j++){
            if(j>i){
                cout <<"*";
            }
            else{
                cout << char(j + 64);
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
 }