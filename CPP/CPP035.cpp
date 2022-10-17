/* 35. Program to print all prime factors of a given number */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The prime factors are as follows:" << endl;
    int i = 2;
    while (num > 1)
    {
        while (num % i == 0)
        {
            cout << i << "\t";
            num = num / i;
        }
        i++;
    }
}