/* 52. Program to calculate sum of squares of first N natural numbers with a recursive function */

#include <iostream>
#include <cmath>
using namespace std;

int sumOfSquares(int);

int main()
{
    int n, sum = 0;
    cout << "Enter the value of N to print the sum of squares of first N natural numbers: ";
    cin >> n;
    sum = sumOfSquares(n);
    cout << "Sum Of Squares: " << sum << endl;
}

int sumOfSquares(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return pow(n, 2) + sumOfSquares(n - 1);
}