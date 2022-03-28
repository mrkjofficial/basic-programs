/* 30. Program to calculate product of first N natural numbers */

#include <iostream>
using namespace std;

int main()
{
    int n, pro = 1;
    cout << "Enter a value to print product of first N natural numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pro = pro * i;
    }
    cout << "Product of first " << n << " natural numbers is " << pro;
}