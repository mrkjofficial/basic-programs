/* 40. Program to calculate H.C.F of two numbers */

#include <iostream>
using namespace std;

int main()
{
    int x, y, i, min;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    min = x < y ? x : y;
    for (i = min; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    cout << "H.C.F = " << i;
}