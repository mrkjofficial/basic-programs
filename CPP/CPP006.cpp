/* 06. Program to swap two numbers */

#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int x, y, temp;
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
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}