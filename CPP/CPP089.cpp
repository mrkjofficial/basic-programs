/* 89. Pattern #14

 4 3 2 1 0
 3 2 1 0
 2 1 0
 1 0
 0

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
            k = n;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= k; j++)
                {
                    cout << " " << k - j;
                }
                cout << endl;
                k--;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 9!" << endl;
        }
    }
}