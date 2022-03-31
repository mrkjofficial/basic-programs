/* 103. Pattern #28

         A
       C B
     F E D
   J I H G
 O N M L K

*/

#include <iostream>
using namespace std;

int main()
{
    int k, n, t = 64;
    while (true)
    {
        cout << endl;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << endl;
        if (n > 0 && n < 7)
        {
            for (int i = 1; i <= n; i++)
            {
                k = t + i;
                t = t + i;
                for (int j = 1; j <= n; j++)
                {
                    if (j >= (n + 1) - i)
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
            cout << "Please enter a value from 1 to 6!" << endl;
        }
    }
}