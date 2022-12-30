/* 90. Pattern #15

     1
   1 2
 1 2 3
   1 2
     1

*/

#include <iostream>
using namespace std;

int main()
{
    int k = 0, m, n, x;
    while (true)
    {
        cout << "Enter the number of rows: ";
        cin >> n;
        m = (n + 1) / 2;
        if (n > 0 && n < 18)
        {
            for (int i = 1; i <= n; i++)
            {
                i < (m + 1) ? k++ : k--;
                x = 1;
                for (int j = 1; j <= m; j++)
                {
                    if (j >= m - k + 1)
                    {
                        cout << " " << x;
                        x++;
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
            cout << "Please enter a value from 1 to 17!" << endl;
        }
    }
}