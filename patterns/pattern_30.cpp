 // * A* B*
 // C* D* E
 // * F* G*
 // H* I* J
 // * K* L*

 #include <iostream>
using namespace std;

int main(){
    int n = 5;
    int i,j;
    char x = 'A';

    for(i =1; i<=n; i++){
        for(j =1; j<=n; j++)
        {
            if((i + j) % 2 == 1)
            {
                cout << x++ << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}