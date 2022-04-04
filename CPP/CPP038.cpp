/* 38. Program to print a number with a summation of 2 prime numbers */

#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int);
int nextPrime(int);

int main()
{
    int n;
    bool flag = false;
    while (true)
    {
        cout << "Enter the number to represent it with a pair of prime numbers: ";
        cin >> n;
        if (n > 0 && n < 100)
        {
            for (int i = 2; i <= (n - i); i = nextPrime(i))
            {
                if (isPrime(n - i))
                {
                    cout << setfill('0') << setw(2) << i << " + " << setfill('0') << setw(2) << (n - i) << " = " << setfill('0') << setw(2) << n << endl;
                    flag = true;
                }
            }
            if (!flag)
            {
                cout << n << " can't be represented with a pair of 2 prime numbers!";
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 99!" << endl;
        }
    }
}

bool isPrime(int n)
{
    bool flag = true;
    flag = n == 1 ? false : true;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}

int nextPrime(int n)
{
    do
    {
        n++;
    } while (!isPrime(n));
    return n;
}