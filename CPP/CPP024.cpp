/* 24. Program to calculate sum of first N odd natural numbers */

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a value to print sum of first N odd natural numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + 2 * i + 1;
    }
    cout << "Sum of first " << n << " odd natural numbers is " << sum;
}