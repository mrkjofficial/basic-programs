/* 25. Program to calculate x power y i.e., x^y */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter its power: ";
    cin >> y;
    cout << "Result = " << pow(x, y);
}