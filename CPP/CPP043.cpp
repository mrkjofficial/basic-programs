/* 43. Program to print 1 + (1+2) + (1+2+3) + … + (1+2+3+…+N) */

#include <iostream>
using namespace std;

int sum(int);

int main()
{
    int n, s = 0;
    cout << "Enter a value of N to print 1 + (1+2) + (1+2+3) + … + (1+2+3+…+N): ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += sum(i);
    }
    cout << "Sum of " << n << " numbers in the series is " << s << "!";
}

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}