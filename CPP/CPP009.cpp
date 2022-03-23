/* 09. Program to find even/odd number without using Modulus/Bitwise operator */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num / 2 * 2 != num)
    {
        cout << num << " is an odd number.";
    }
    else
    {
        cout << num << " is an even number.";
    }
}