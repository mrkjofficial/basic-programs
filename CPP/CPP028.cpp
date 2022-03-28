/* 28. Program to print table of user’s choice */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    printf("Enter a number to print its table: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << setw(2) << setfill('0') << i << " = " << num * i << endl;
    }
}