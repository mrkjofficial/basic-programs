/* 49. Program to print first N natural numbers in reverse order with a recursive function */

#include <iostream>
using namespace std;

void generateNum(int);

int main()
{
    int n;
    cout << "Enter the value of N to print N numbers in reverse: ";
    cin >> n;
    cout << "The N numbers are:" << endl;
    generateNum(n);
}

void generateNum(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        generateNum(n - 1);
    }
}