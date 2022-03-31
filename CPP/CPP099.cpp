/* 99. Pattern #24

     0
   1 2 1
 2 3 4 3 2
   1 2 1
     0

*/

#include <iostream>
using namespace std;

int main()
{
    int k = 0, m, n, p = 1;
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
                i <= m ? k++ : k--;
                p = k - 1;
                for (int j = 1; j <= n; j++)
                {
                    if (j >= m + 1 - k && j <= m - 1 + k)
                    {
                        cout << " " << p % 10;
                        j < m ? p++ : p--;
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
            cout << "Please enter a odd value from 1 to 50!" << endl;
        }
    }
}