/* 67. Program to count words in a sentence */

#include <iostream>
using namespace std;

int wordCount(string, string);

int main()
{
    string str;
    cout << endl;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    cout << endl;
    cout << "Total Words: " << wordCount(str, " ") << endl;
}

int wordCount(string str, string del)
{
    int count = 0, i = 0;
    while (i != -1)
    {
        i = str.find(del);
        str = str.substr(i + 1);
        count++;
    }
    return count;
}