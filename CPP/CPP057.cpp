/* 57. Program to find smallest among 10 numbers in an array */

#include <iostream>
using namespace std;

void input(int[], int);
void print(int[], int);
int getMin(int[], int);

int main()
{
    int min = 0, size;
    cout << endl;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << endl;
    input(array, size);
    print(array, size);
    min = getMin(array, size);
    cout << endl;
    cout << "Min Element: " << min << endl;
}

void input(int array[], int size)
{
    cout << "Enter the array elements:" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;
}

void print(int array[], int size)
{
    cout << "The array elements are:" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
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