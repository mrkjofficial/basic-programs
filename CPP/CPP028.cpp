/* 28. Program to reverse a number */

#include <iostream>
using namespace std;

int main()
{
    int num, rNum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        rNum = rNum * 10 + (num % 10);
        num = num / 10;
    }
    cout << "Reversed Number = " << rNum;
}