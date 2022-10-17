/* 29. Program to print all Armstrong numbers under 1000 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Armstrong numbers under 1000 are as follows:" << endl;
    for (int num = 1; num <= 1000; num++)
    {
        int temp = num;
        int newNum = 0;
        int digits = to_string(num).size();
        while (temp != 0)
        {
            int rem = temp % 10;
            newNum = newNum + pow(rem, digits);
            temp = temp / 10;
        }
        if (newNum == num)
        {
            cout << num << "\t";
        }
    }
}