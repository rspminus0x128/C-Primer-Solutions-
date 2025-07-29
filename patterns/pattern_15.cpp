// 12345
 // 1234*
 // 123**
 // 12***
 // 1****

 #include<iostream>
using namespace std;

int main(){

    int i,j,k;
    int n = 5;

    for(i =1;i <=n;i++){

        for(j =1;j <=n+1-i;j++){
            cout << j;
        }
        for(k =1;k<i;k++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}