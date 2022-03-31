/* 09. Program to find the greater number among two numbers */

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    if (x > y)
    {
        cout << x << " is greater than " << y << ".";
    }
    else if (x < y)
    {
        cout << y << " is greater than " << x << ".";
    }
    else
    {
        cout << x << " is equal to " << y << ".";
    }
}