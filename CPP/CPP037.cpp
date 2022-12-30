/* 37. Program to print N co-prime numbers */

#include <iostream>
using namespace std;

int main()
{
    int y = 2, min, n;
    bool flag;
    cout << "Enter a number to print co-prime numbers: ";
    cin >> n;
    cout << "The co-prime numbers are as follows:" << endl;
    while (true)
    {
        for (int x = 2; x <= y; x++)
        {
            flag = true;
            min = x < y ? x : y;
            for (int i = 2; i <= min; i++)
            {
                if (x % i == 0 && y % i == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "(" << x << "," << y << ")" << endl;
                n--;
                if (n == 0)
                {
                    exit(0);
                }
            }
        }
        y++;
    }
}