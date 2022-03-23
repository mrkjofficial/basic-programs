/* 73. Pattern #22

 * * * * *
 * * * * *
 * *   * *
 * * * * *
 * * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        m = (n + 1) / 2;
        if (n > 0 && n < 51 && n % 2 == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i == 1 || i == n || j == 1 || j == n || (i >= m - 1 && i <= m + 1 && j >= m - 1 && j <= m + 1) && (i == m - 1 || i == m + 1 || j == m - 1 || j == m + 1))
                    {
                        cout << " *";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 50!" << endl;
        }
    }
}