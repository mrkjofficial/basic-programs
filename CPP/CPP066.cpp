/* 66. Program to check whether a string is palindrome or not */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str, revstr;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    revstr = str;
    reverse(revstr.begin(), revstr.end());
    if (str == revstr)
    {
        cout << "It's a palindrome string!" << endl;
    }
    else
    {
        cout << "It's not a palindrome string!" << endl;
    }
}