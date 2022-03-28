/* 112. Program to reverse a string word wise */

#include <iostream>
using namespace std;

string wordCount(string, string);

int main()
{
    string str;
    cout << endl;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    cout << endl;
    cout << "Reversed String (Word Wise): " << wordCount(str, " ") << endl;
}

string wordCount(string str, string del)
{
    string revstr;
    int i = 0;
    while (i != -1)
    {
        i = str.rfind(del);
        revstr += str.substr(i + 1) + " ";
        if(i != -1){
            str.erase(i);
        }
    }
    revstr.pop_back();
    return revstr;
}