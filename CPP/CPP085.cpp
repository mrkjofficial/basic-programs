/* 85. Program to print a Pascal Triangle

             01
          01    01
       01    02    01      
    01    03    03    01   
 01    04    06    04    01

*/

#include <iostream>
#include <iomanip>
using namespace std;

void pascal(int);
int combination(int, int);
int factorial(int);

int main()
{
    int n;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows to print a Pascal Triangle: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 10)
        {
            pascal(n);
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 9!" << endl;
        }
    }
}

void pascal(int n)
{
    int k, r;
    for (int i = 1; i <= n; i++)
    {
        k = 1;
        r = 0;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i && k)
            {
                cout << " " << setfill('0') << setw(2) << combination(i - 1, r);
                k = 0;
                r++;
            }
            else
            {
                cout << "   ";
                k = 1;
            }
        }
        cout << endl;
    }
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
