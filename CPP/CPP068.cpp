/* 68. Pattern #18

         A
       A B A
     A B C B A
   A B C D C B A
 A B C D E D C B A

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
        if (n > 0 && n < 27)
        {
            for (int i = 1; i <= n; i++)
            {
                k = 65;
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j >= n + 1 - i && j <= n - 1 + i)
                    {
                        cout << " " << (char)k;
                        j < n ? k++ : k--;
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
            cout << "Please enter a value from 1 to 26!" << endl;
        }
    }
}