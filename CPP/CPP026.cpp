/* 26. Program to count digits of a given number */

#include <iostream>
using namespace std;

int main()
{
    int digit = 0, num;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        digit++;
    }
    cout << "It is a " << digit << "-digit number.";
}