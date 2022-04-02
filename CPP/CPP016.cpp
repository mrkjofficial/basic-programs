/* 16. Program to print first N odd natural numbers */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a value to print N odd natural numbers: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << 2 * i + 1 << " ";
    }
}