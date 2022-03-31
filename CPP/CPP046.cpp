/* 46. Program to print fibonacci series of n numbers with a recursive function */

#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
    int n;
    cout << "Enter a value of n to print fibonacci series of n numbers: ";
    cin >> n;
    cout << "Fibonacci Series:" << endl;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "\t" << fibonacci(i);
    }
    cout << endl;
}

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}