/* 108. Program to transform a string to its uppercase/lowercase */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Upper Case String: " << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lower Case String: " << str << endl;
}