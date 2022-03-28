/* 69. Pattern #19

         A 1
       A B 1 2
     A B C 1 2 3
   A B C D 1 2 3 4
 A B C D E 1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main()
{
    int k = 0, n;
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
                k = 'A';
                for (int j = 1; j <= 2 * n; j++)
                {
                    if (j >= n + 1 - i && j <= n + i)
                    {
                        if (j == n + 1)
                        {
                            k = '1';
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