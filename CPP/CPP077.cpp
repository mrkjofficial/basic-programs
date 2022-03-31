/* 77. Pattern #2

         *
       * *
     * * *
   * * * *
 * * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 51)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j >= (n + 1) - i)
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