/* 71. Program to count vowels in a given string */

#include <iostream>
#include <algorithm>
using namespace std;

int countVowels(string);
int main()
{
    string str;
    cout << endl;
    cout << "Enter a String: ";
    getline(cin, str);
    cin.sync();
    cout << endl;
    cout << "Number of Vowels: " << countVowels(str) << endl;
}

int countVowels(string str)
{
    int count = 0;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}