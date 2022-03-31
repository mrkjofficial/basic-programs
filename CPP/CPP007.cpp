/* 07. Program to swap two numbers without using 3rd variable */

#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Numbers before swapping:" << endl;
    cout << "X = " << x << " | Y = " << y << endl;
    swap(&x, &y);
    cout << "Numbers after swapping:" << endl;
    cout << "X = " << x << " | Y = " << y << endl;
}

void swap(int *x, int *y)
{
    *x = *x - *y;
    *y = *x + *y;
    *x = *y - *x;
}