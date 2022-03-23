/* 76. Pattern #26

         1
       2 1 2
     3 2 1 2 3
   4 3 2 1 2 3 4
 5 4 3 2 1 2 3 4 5

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
                k = i;
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j >= (n + 1) - i && j <= (n - 1) + i)
                    {
                        cout << " " << k;
                        j < n ? k-- : k++;
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