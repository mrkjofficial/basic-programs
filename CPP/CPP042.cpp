/* 42. Program to print first n positive numbers with exactly two bits set (exactly two 1's in Binary Representation) (Logic #2) */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value of N to print N positive numbers with two bits set: ";
    cin >> n;
    for (int i = 2; n; i *= 2)
    {
        for (int j = 1; j < i; j *= 2)
        {
            cout << i + j << "\t";
            n--;
            if (n == 0)
            {
                break;
            }
        }
    }
}