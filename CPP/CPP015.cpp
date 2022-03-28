/* 15. Program to calculate roots of a quadratic equation */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    float x, y;
    cout << "Enter the coefficient of x^2, x & constant term: ";
    cin >> a >> b >> c;
    d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        cout << "Both roots are real & distinct: " << x << ", " << y << ".";
    }
    else if (d == 0)
    {
        x = -b / (2.0 * a);
        cout << "Both roots are equal: " << x << ".";
    }
    else
    {
        cout << "Both roots are imaginary.";
    }
}