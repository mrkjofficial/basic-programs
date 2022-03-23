/* 79. Pattern #29

                 *
               * *
             * * *
           * * * *
         * * * * *
         | * * * *
 *       |   * * *
 * *     |     * *
 * * *   |       *
 * * * * |
 * * * * *
 * * * *
 * * *
 * *
 *

*/

#include <iostream>
using namespace std;

int main()
{
    int k, n, t = 64;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 21)
        {
            for (int i = 1; i <= 3 * n; i++)
            {
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (i <= n)
                    {
                        if (j >= 2 * n - i)
                        {
                            cout << " *";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    else if (i <= 2 * n)
                    {
                        if (j == n)
                        {
                            cout << " |";
                        }
                        else if (j <= (i - n - 1) || j >= i)
                        {
                            cout << " *";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    else if (i <= 3 * n)
                    {
                        if (j <= 3 * n + 1 - i)
                        {
                            cout << " *";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 20!" << endl;
        }
    }
}