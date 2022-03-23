/* 94. Program to calculate sum of digits of a number with a recursive function */

#include <iostream>
using namespace std;

int sumOfDigits(int);

int main()
{
    int num, sum = 0;
    cout << endl;
    cout << "Enter a number: ";
    cin >> num;
    sum = sumOfDigits(num);
    cout << endl;
    cout << "Sum Of Digits: " << sum << endl;
}

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = 0;
    sum += num % 10;
    num = num / 10;
    return sum + sumOfDigits(num);
}