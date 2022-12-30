/* 14. Program to print first N natural numbers in reverse order */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value to print N natural numbers in reverse: ";
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
}