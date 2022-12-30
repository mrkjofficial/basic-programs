/* 13. Program to print first N natural numbers */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value to print N natural numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}