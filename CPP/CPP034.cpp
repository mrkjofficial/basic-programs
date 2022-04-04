/* 34. Program to print all prime numbers between two given numbers */

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter a range to print prime numbers: ";
    cin >> x >> y;
    cout << "The prime numbers are as follows:" << endl;
    int ub = x > y ? x : y;
    int lb = x < y ? x : y;
    int j;
    for (int i = lb; i < ub; i++)
    {
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << "\t";
        }
    }
}