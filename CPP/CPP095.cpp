/* 95. Program to calculate sum of squares of digits of a number with a recursive function */

#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigitSquare(int);

int main()
{
    int num, sum = 0;
    cout << endl;
    cout << "Enter a number: ";
    cin >> num;
    sum = sumOfDigitSquare(num);
    cout << endl;
    cout << "Sum Of Digit Squares: " << sum << endl;
}

int sumOfDigitSquare(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = 0;
    sum += pow((num % 10), 2);
    num = num / 10;
    return sum + sumOfDigitSquare(num);
}