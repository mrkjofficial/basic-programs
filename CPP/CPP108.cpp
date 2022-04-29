/* 108. Pattern #33

 00
 05 01
 09 06 02
 12 10 07 03
 14 13 11 08 04

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int k = 0, n, v;
    while (true)
    {
        cout << "Enter the number of rows: ";
        cin >> n;
        if (n > 0 && n < 14)
        {
            for (int i = 1; i <= n; i++)
            {
                v = k;
                for (int j = 1; j <= i; j++)
                {
                    cout << " " << setfill('0') << setw(2) << v;
                    v = v - (n - i + j);
                }
                k = k + 1 + n - i;
                cout << endl;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 13!" << endl;
        }
    }
}