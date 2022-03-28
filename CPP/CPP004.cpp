/* 04. Program to print a text at any (X,Y) coordinates of the screen */

#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);

int main()
{
    string s;
    int x, y;
    cout << "Enter a text to print: ";
    getline(cin, s);
    cin.sync();
    cout << "Enter the (X,Y) coordinates to print: ";
    cin >> x >> y;
    gotoxy(x, y);
    cout << s;
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}