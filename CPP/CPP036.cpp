/* 36. Program to check co-prime numbers */

#include <iostream>
using namespace std;

int main()
{
    int x, y, min;
    bool flag = true;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    min = x < y ? x : y;
    for (int i = 2; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << x << " & " << y << " are co-prime numbers.";
    }
    else
    {
        cout << x << " & " << y << " are not co-prime numbers.";
    }
}