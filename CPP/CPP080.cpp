/* 80. Pattern #30

         1
       A   B
     1   2   3
   A   B   C   D
 1   2   3   4   5

*/

#include <iostream>
using namespace std;

int main()
{
    int k, n, p;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 10)
        {
            for (int i = 1; i <= n; i++)
            {
                k = 1;
                p = 1;
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j >= (n + 1) - i && j <= (n - 1) + i && k)
                    {
                        if (i % 2 == 0)
                        {
                            cout << " " << (char)(p + 64);
                        }
                        else
                        {
                            cout << " " << p;
                        }
                        p++;
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
            cout << "Please enter a value from 1 to 9!" << endl;
        }
    }
}