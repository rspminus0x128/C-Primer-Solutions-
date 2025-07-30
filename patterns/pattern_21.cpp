 // A****
 // AB***
 // ABC**
 // ABCD*
 // ABCDE

 #include<iostream>
 using namespace std;

 int main(){

    int i,j,k;            
    int n = 5;

    for (i = 1; i<=n; i++){
        
        for(j =1; j<=n; j++){
           
            if(j >i){
                cout << "*";
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