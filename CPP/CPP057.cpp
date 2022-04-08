/* 57. Program to find smallest among the numbers in an array */

#include <iostream>
using namespace std;

void input(int[], int);
int getMin(int[], int);

int main()
{
    int min = 0, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    input(array, size);
    min = getMin(array, size);
    cout << "Min Element: " << min << endl;
}

void input(int array[], int size)
{
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int getMin(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}