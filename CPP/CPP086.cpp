/* 86. Pattern #11

 *
 * *
 * * *
 * *
 *

*/

#include <iostream>
using namespace std;

int main()
{
    int k = 0, m, n;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 51)
        {
            m = (n + 1) / 2;
            for (int i = 1; i <= n; i++)
            {
                if (n % 2 == 0)
                {
                    if (i <= m)
                    {
                        k++;
                    }
                    else if (i > m + 1)
                    {
                        k--;
                    }
                }
                else
                {
                    i <= m ? k++ : k--;
                }
                for (int j = 1; j <= k; j++)
                {
                    cout << " *";
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