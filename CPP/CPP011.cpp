/* 11. Program to move your name with W,A,S,D keystrokes */

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int, int);

int main()
{
    char choice;
    int x = 10, y = 10;
    gotoxy(x, y);
    cout<<"Karan Jaiswal";
    while (1)
    {
        choice = getch();
        switch (choice)
        {
        case 87:
            y--;
            break;
        case 65:
            x--;
            break;
        case 83:
            y++;
            break;
        case 68:
            x++;
            break;
        case 119:
            y--;
            break;
        case 97:
            x--;
            break;
        case 115:
            y++;
            break;
        case 100:
            x++;
            break;
        case 27:
            exit(0);
        }
        system("cls");
        gotoxy(x, y);
        cout << "Karan Jaiswal";
    }
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}