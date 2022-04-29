/* 107. Pattern #32

 A B C D E F G H I
 A B C D   F G H I
 A B C       G H I
 A B           H I
 A               I

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
        if (n > 0 && n < 14)
        {
            for (int i = 1; i <= n; i++)
            {
                k = 65;
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j <= n + 1 - i || j >= n - 1 + i)
                    {
                        cout << " " << (char)k;
                        k++;
                    }
                    else
                    {
                        cout << "  ";
                        k++;
                    }
                }
                cout << endl;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 13!" << endl;
        }
    }
}