/* 12. Program to find whether a number is divisible by 5 or not */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0)
    {
        cout << num << " is divisible by 5.";
    }
    else
    {
        cout << num << " is not divisible by 5.";
    }
}