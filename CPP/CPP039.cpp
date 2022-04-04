/* 39. Program to convert from Binary to Decimal (upto 10 digits input) */

#include <iostream>
#include <cmath>
#include <conio.h>
#define SIZE 10
using namespace std;

int getBinaryInput();
int toDecimal(int);

int main()
{
    int bin, dec;
    cout << "Enter a binary number: ";
    bin = getBinaryInput();
    dec = toDecimal(bin);
    cout << endl;
    cout << "Decimal = " << dec;
}

int getBinaryInput()
{
    int ch, count = 0, bin = 0;
    while (true)
    {
        ch = getch();
        if (ch >= 48 && ch <= 49 && count != SIZE)
        {
            cout << (char)ch;
            bin = bin * 10 + (ch - 48);
            count++;
        }
        else if (ch == 8 && count != 0)
        {
            bin = bin / 10;
            cout << "\b \b";
            count--;
        }
        else if (ch == 13)
        {
            return bin;
        }
    }
}

int toDecimal(int bin)
{
    int dec = 0, rem;
    for (int i = 0; bin > 0; i++)
    {
        rem = bin % 10;
        dec = dec + rem * pow(2, i);
        bin = bin / 10;
    }
    return dec;
}