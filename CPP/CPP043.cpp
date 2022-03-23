/* 43. Program to print all prime factors of a given number */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The prime factors are as follows:\n";
    for (int i = 2; num > 1; i++)
    {
        while (num % i == 0)
        {
            cout << i << "\t";
            num = num / i;
        }
    }
}