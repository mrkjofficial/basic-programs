/* 14. Program to find the greater number among three numbers */

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    if (x > y)
    {
        if (x > z)
        {
            cout << x << " is greatest.";
        }
        else
        {
            cout << z << " is greatest.";
        }
    }
    else if (x < y)
    {
        if (y > z)
        {
            cout << y << " is greatest.";
        }
        else
        {
            cout << z << " is greatest.";
        }
    }
    else
    {
        cout << "All three numbers are equal.";
    }
}