/* 109. Pattern #34

 00
 00 01
 00 02 04
 00 03 06 09
 00 04 08 12 16

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int k, n;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 11)
        {
            for (int i = 1; i <= n; i++)
            {
                k = 0;
                for (int j = 1; j <= n; j++)
                {
                    if (j <= i)
                    {
                        cout << " " << setfill('0') << setw(2) << k;
                        k = k + i - 1;
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                printf("\n");
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 10!" << endl;
        }
    }
}