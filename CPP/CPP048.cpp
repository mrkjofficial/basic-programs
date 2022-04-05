/* 48. Program to print first N natural numbers with a recursive function */

#include <iostream>
using namespace std;

void generateNum(int);

int main()
{
    int n;
    cout << "Enter the value of N to print N numbers: ";
    cin >> n;
    cout << "The N numbers are:" << endl;
    generateNum(n);
}

void generateNum(int n)
{
    if (n > 0)
    {
        generateNum(n - 1);
        cout << n << " ";
    }
}