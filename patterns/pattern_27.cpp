// EDCBA
 // *DCBA
 // **CBA
 // ***BA
 // ****A


 #include<iostream>
 using namespace std;

 int main(){
     
    int i,j,k;
    int n = 5;

    for (i = 5; i>=1; i--){
        for(j = n; j>=1; j--){
            if(j >i){
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