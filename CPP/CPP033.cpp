/* 33. Program to print first N prime numbers */

#include <iostream>
using namespace std;

void printPrime(int);
bool isPrime(int);

int main()
{
    int n;
    cout << "Enter a value of N to print N prime numbers: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Input!";
    }
    else
    {
        printPrime(n);
    }
}

void printPrime(int n)
{
    int num = 2;
    while (n > 0)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            n--;
        }
        num++;
    }
}

bool isPrime(int num)
{
    bool flag = true;
    flag = num == 1 ? false : true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}
