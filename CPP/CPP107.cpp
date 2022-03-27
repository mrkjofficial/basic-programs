/* 107. Program to reverse a string */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    reverse(str.begin(), str.end());
    cout << "Reversed String: " << str;
}