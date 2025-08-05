 //     1
 //    **
 //   321
 //  ****
 // 54321

#include <iostream>
using namespace std;

int main(){
    
    int i,j;
    int n = 5;

    for(i = 1; i <=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            if(i>=j)
            {
              if(i % 2 == 0)
              {
                cout << "*";
              } 
              else
              {
                cout << j;
              } 
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}