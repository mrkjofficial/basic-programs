/* 23. Program to calculate sum of first N even natural numbers */

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a value to print sum of first N even natural numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 2 * i;
    }
    cout << "Sum of first " << n << " even natural numbers is " << sum;
}