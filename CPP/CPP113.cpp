/* 113. Program to remove adjacent duplicate characters from a string */

#include <iostream>
using namespace std;

string remove(string);
int main()
{
    string str;
    cout << endl;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    cout << endl;
    cout << "String with unique adjacent characters: " << remove(str) << endl;
}

string remove(string str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            str.erase(i + 1, 1);
            i--;
        }
    }
    return str;
}