/* 48. Program to print first N natural numbers with a recursive function */

#include <iostream>
using namespace std;

void generateNum(int);

int main()
{
    int n;
    cout << endl;
    cout << "Enter the value of N to print N numbers: ";
    cin >> n;
    cout << endl;
    cout << "The N numbers are:" << endl;
    cout << endl;
    generateNum(n);
    cout << endl;
}

void generateNum(int n)
{
    if (n > 0)
    {
        generateNum(n - 1);
        cout << n << " ";
    }
}