/* 45. Program to calculate factorial of a number with a recursive function */

#include <iostream>
using namespace std;

long factorial(int);

int main()
{
    int n;
    cout << "Enter the number to calculate its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
}

long factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}