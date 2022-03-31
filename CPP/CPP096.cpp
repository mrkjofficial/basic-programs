/* 96. Pattern #21

         1
       1 2 A
     1 2 3 A B
   1 2 3 4 A B C
 1 2 3 4 5 A B C D

*/

#include <iostream>
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
        if (n > 0 && n < 10)
        {
            for (int i = 1; i <= n; i++)
            {
                k = '1';
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j >= n + 1 - i && j <= n - 1 + i)
                    {
                        if (j == n + 1)
                        {
                            k = 'A';
                        }
                        cout << " " << (char)k;
                        k++;
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
            cout << "Please enter a value from 1 to 9!" << endl;
        }
    }
}