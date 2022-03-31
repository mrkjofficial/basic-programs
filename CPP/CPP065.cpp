/* 65. Program to sort strings in dictionary order */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    sort(str.begin(), str.end());
    cout << "Sorted String: " << str << endl;
}