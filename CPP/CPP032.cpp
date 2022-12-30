/* 32. Program to check whether a given number is prime or not */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool flag = num == 1 ? false : true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not a prime number.";
    }
}