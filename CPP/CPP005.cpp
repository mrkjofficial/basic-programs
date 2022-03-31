/* 05. Program to take integer inputs only */

#include <iostream>
#include <conio.h>
using namespace std;

int getIntegerOnly();

int main()
{
    int num;
    cout << "Enter a number: ";
    num = getIntegerOnly();
    cout << "\nNumber: " << num;
}

int getIntegerOnly()
{
    int count = 0, input, num = 0;
    do
    {
        input = getch();
        if (input >= 48 && input <= 57)
        {
            cout << (char)input;
            num = num * 10 + (input - 48);
            count++;
        }
        else if (input == 8 && count != 0)
        {
            num = num / 10;
            cout << "\b \b";
            count--;
        }
        else if (input == 13)
        {
            return num;
        }
    } while (true);
}