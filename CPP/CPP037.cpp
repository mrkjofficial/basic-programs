/* 37. Program to reverse a number */

#include <iostream>
using namespace std;

int main()
{
    int num, rNum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; num != 0; i++)
    {
        rNum = rNum * 10 + (num % 10);
        num = num / 10;
    }
    cout << "Reversed Number = " << rNum;
}