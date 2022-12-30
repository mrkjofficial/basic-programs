/* 27. Program to calculate sum of the digits of a given number */

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout << "Sum = " << sum;
}