/* 102. Pattern #27

 01
 03 * 02
 04 * 05 * 06
 10 * 09 * 08 * 07
 11 * 12 * 13 * 14 * 15

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int k, n, t = 0;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 13)
        {
            for (int i = 1; i <= n; i++)
            {
                k = i % 2 == 1 ? t + 1 : t + i;
                t = t + i;
                for (int j = 1; j <= 1 + 2 * (i - 1); j++)
                {
                    if (j % 2 == 1)
                    {
                        cout << " " << setfill('0') << setw(2) << k;
                        i % 2 == 1 ? k++ : k--;
                    }
                    else
                    {
                        cout << " *";
                    }
                }
                cout << endl;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 12!" << endl;
        }
    }
}