/* 66. Pattern #16

 \ * * * /
 * \ * / *
 * * \ * *
 * / * \ *
 / * * * \

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
        if (n > 0 && n < 51)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j != i && j != (n + 1) - i)
                    {
                        cout << " *";
                    }
                    else
                    {
                        if (j == i)
                        {
                            cout << " \\";
                        }
                        else
                        {
                            cout << " /";
                        }
                    }
                }
                cout << endl;
            }
            exit(0);
        }
        else
        {
            cout << "Please enter a value from 1 to 50!" << endl;
        }
    }
}