/* 72. Program to find a substring in a given string */

#include <iostream>
using namespace std;

int main()
{
    string str = "Lorem ipsum dolor sit amet consectetur adipiscing elit Suspendisse sollicitudin justo sapien sit amet mollis nulla gravida vitae";
    string substring;
    cout << "String:" << endl;
    cout << str << endl;
    cout << "Enter a String to search: ";
    getline(cin, str);
    cin.sync();
    if (str.find(substring))
    {
        cout << "String found!" << endl;
    }
    else
    {
        cout << "String not found!" << endl;
    }
}