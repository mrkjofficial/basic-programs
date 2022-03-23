/* 31. Program to calculate factorial of a number */

#include <iostream>
using namespace std;

int main()
{
    int n, fac = 1;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    cout << "Factorial of " << n << " is " << fac;
}