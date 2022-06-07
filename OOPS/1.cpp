#include <iostream>
#include <math.h>
using namespace std;
// int main(){
//     int a =10;
//     int x =sqrt(a);
//     cout<<x;
//     return 0;
// }
int main()
{
    int i, x = 1;
    bool flag = true;
    if (x > 1)
    {
        for (i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            cout << "it is a prime number !!";
        }
        else
        {
            cout << "it is not a prime number !!";
        }
    }
    else{
            cout << "it is not a prime number !!";
    }
}