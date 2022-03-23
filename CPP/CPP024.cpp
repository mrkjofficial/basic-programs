/* 24. Program to print first N even natural numbers */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a value to print N even natural numbers: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << 2 * i << " ";
    }
}