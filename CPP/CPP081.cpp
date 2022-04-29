/* 81. Pattern #6

         *
       *   *
     *   *   *
   *   *   *   *
 *   *   *   *   *

*/

#include <iostream>
using namespace std;

int main()
{
    int k, n;
    while (true)
    {
        cout << "Enter the number of rows: ";
        cin >> n;
        if (n > 0 && n < 51)
        {
            for (int i = 1; i <= n; i++)
            {
                k = 1;
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j >= (n + 1) - i && j <= (n - 1) + i && k)
                    {
                        cout << " *";
                        k = 0;
                    }
                    else
                    {
                        cout << "  ";
                        k = 1;
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