/* 38. Program to print all Armstrong numbers under 1000 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, newNum, rem, temp;
    cout << "Armstrong numbers under 1000 are as follows:" << endl;
    for (num = 1; num <= 1000; num++)
    {
        temp = num;
        newNum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            newNum = newNum + pow(rem, 3);
            temp = temp / 10;
        }
        if (newNum == num)
        {
            cout << num << "\t";
        }
    }
}