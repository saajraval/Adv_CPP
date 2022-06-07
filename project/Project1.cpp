#include <iostream>
#include "Project1.hpp" //including the header file that we made
#include <math.h>
using namespace std;
Solution::Solution()
{
}
void Solution::findPrimeNumber(int x)
{
    int i;
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
    else
    {
        cout << "it is not a prime number !!";
    }
}
void Solution::findArmstrongNumber(int x)
{
    int i, sum, r, count = 0, temp = x, checkArm = x;
    while (temp > 0)
    {
        r = temp % 10;
        count++;
        temp/=10;
    } // end of while
    while (x > 0)
    {
        r = x % 10;
        sum += pow(r, count);
        x /= 10;
    } // end of while
    if (sum == checkArm)
    {
        cout << "The number is Armstrong !!";
    }
    else
    {
        cout << "The number is not Armstrong !!";
    }
}
int main()
{

    int num, choice;
    Solution s;
    cout << "Enter the number to check :";
    cin >> num;
    cout << "\n1 To check for prime number:";
    cout << "\n2 To check for Armstong  number:";
    cout << "\n Enter your choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        s.findPrimeNumber(num);
        break;
    case 2:
        s.findArmstrongNumber(num);
        break;
    }
    return 0;
}