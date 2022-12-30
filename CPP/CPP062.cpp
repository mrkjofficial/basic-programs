/* 62. Program to calculate length of the string */

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    cout << "Length of the String: " << str.size();
}