/* 97. Program to calculate sum of cubes of first N natural numbers with a recursive function */

#include <iostream>
#include <cmath>
using namespace std;

int sumOfCubes(int);

int main()
{
    int n, sum = 0;
    cout << endl;
    cout << "Enter the value of N to print the sum of cubes of first N natural numbers: ";
    cin >> n;
    sum = sumOfCubes(n);
    cout << endl;
    cout << "Sum Of Cubes: " << sum << endl;
}

int sumOfCubes(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return pow(n, 3) + sumOfCubes(n - 1);
}