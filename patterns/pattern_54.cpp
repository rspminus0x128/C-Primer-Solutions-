 // #*#*#
 //  *#*#
 //   #*#
 //    *#
 //     #


 #include <iostream>
 using namespace std;

 int main(){

    int i,j;
    int n =5;

    for( i =n ;i >=1; i--)
    {
        for(j =n; j>=1; j--)
        {
            if(i >=j){
                if(j % 2 == 0){
                    cout << "*";
                }
                else{
                    cout << "#";
                }
            }
            else{
                cout << " ";
            }

        }
        cout << endl;

    }
    cout << endl;

    return 0;
    
 }