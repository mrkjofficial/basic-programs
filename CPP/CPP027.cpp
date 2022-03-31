/* 27. Program to calculate sum of the digits of a given number */

#include <iostream>
using namespace std;

int main()
{
    int num, s = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; num != 0; i++)
    {
        s = s + (num % 10);
        num = num / 10;
    }
    cout << "Sum = " << s;
}