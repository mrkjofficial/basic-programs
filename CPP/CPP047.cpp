/* 47. Program to convert from Binary to Decimal (Extended Range) */

#include <iostream>
#include <cmath>
#include <conio.h>
#define SIZE 64
using namespace std;

void getBinaryInput(char *);
unsigned long long int toDecimal(char *);

int main()
{
    char bin[SIZE];
    unsigned long long int dec;
    cout << "Enter a binary number: ";
    getBinaryInput(bin);
    dec = toDecimal(bin);
    cout << "\nDecimal = " << dec;
}

void getBinaryInput(char *bin)
{
    int ch, i = 0;
    while (true)
    {
        ch = getch();
        if (ch >= 48 && ch <= 49 && i != SIZE)
        {
            cout << (char)ch;
            bin[i] = (char)ch;
            i++;
        }
        else if (ch == 8 && i != 0)
        {
            bin[i - 1] = '\0';
            cout << "\b \b";
            i--;
        }
        else if (ch == 13)
        {
            break;
        }
    }
}

unsigned long long int toDecimal(char *bin)
{
    unsigned long long int dec = 0;
    for (int i = 0; bin[i] != '\0'; i++)
    {
        if (bin[i] == '0')
        {
            dec = dec * 2 + 0;
        }
        else
        {
            dec = dec * 2 + 1;
        }
    }
    return dec;
}