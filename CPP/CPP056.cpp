/* 56. Program to find greatest among the numbers in an array */

#include <iostream>
using namespace std;

void input(int[], int);
int getMax(int[], int);

int main()
{
    int max = 0, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    input(array, size);
    max = getMax(array, size);
    cout << "Max Element: " << max << endl;
}

void input(int array[], int size)
{
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int getMax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}