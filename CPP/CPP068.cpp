/* 68. Program to reverse a string word wise */

#include <iostream>
using namespace std;

string revStringWords(string, string);

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    cout << "Reversed String (Word Wise): " << revStringWords(str, " ") << endl;
}

string revStringWords(string str, string del)
{
    string revstr;
    int i = 0;
    while (i != -1)
    {
        i = str.rfind(del);
        revstr += str.substr(i + 1) + " ";
        if (i != -1)
        {
            str.erase(i);
        }
    }
    revstr.pop_back();
    return revstr;
}