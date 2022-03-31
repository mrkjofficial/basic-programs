/* 100. Pattern #25

 A
 B A
 C B A
 D C B A
 E D C B A

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
                k = 64 + i;
                for (int j = 1; j <= n; j++)
                {
                    if (j <= i)
                    {
                        cout << " " << (char)k;
                        k--;
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