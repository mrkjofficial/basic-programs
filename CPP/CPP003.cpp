/* 03. Program to calculate area of a circle */

#include <iostream>
#define PI 3.14
using namespace std;

int main()
{
    int r;
    float a;
    cout << "Enter radius: ";
    cin >> r;
    a = PI * (r * r);
    cout << "Area = " << a;
}