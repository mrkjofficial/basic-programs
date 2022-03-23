/* 26. Program to print first N even natural numbers in reverse order */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a value to print N even natural numbers in reverse: ";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        cout << 2 * i << " ";
    }
}