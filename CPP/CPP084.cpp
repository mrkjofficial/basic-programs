/* 84. Pattern #9

 A B C D E D C B A
 A B C D   D C B A
 A B C       C B A
 A B           B A
 A               A

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
        if (n > 0 && n < 27)
        {
            for (int i = 1; i <= n; i++)
            {
                k = 65;
                for (int j = 1; j <= 2 * n - 1; j++)
                {
                    if (j <= n + 1 - i || j >= n - 1 + i)
                    {
                        cout << " " << (char)k;
                        j < n ? k++ : k--;
                    }
                    else
                    {
                        cout << "  ";
                        j < n ? k++ : k--;
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