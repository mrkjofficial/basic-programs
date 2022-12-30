/* 30. Program to calculate L.C.M of two numbers */

#include <iostream>
using namespace std;

int main()
{
    int x, y, i, max;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    max = x > y ? x : y;
    for (i = max; i <= x * y; i = i + max)
    {
        if (i % x == 0 && i % y == 0)
        {
            break;
        }
    }
    cout << "L.C.M = " << i;
}