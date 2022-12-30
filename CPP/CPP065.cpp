/* 65. Program to sort strings in dictionary order */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    string strArray[size];
    cout << "Enter " << size << " Strings:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> strArray[i];
    }
    sort(strArray, strArray + size);
    cout << "Sorted String: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << strArray[i] << " ";
    }
}