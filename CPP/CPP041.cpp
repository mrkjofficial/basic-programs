/* 41. Program to print first n positive numbers with exactly two bits set (exactly two 1's in Binary Representation) (Logic #1) */

#include <iostream>
using namespace std;

int main()
{
    int count, n, num = 3, bNum;
    cout << "Enter a value of N to print N positive numbers with two bits set: ";
    cin >> n;
    while (n)
    {
        bNum = num;
        count = 0;
        while (bNum)
        {
            if (bNum % 2 == 1)
            {
                count++;
            }
            bNum = bNum / 2;
        }
        if (count == 2)
        {
            cout << num << "\t";
            n--;
        }
        num++;
    }
}