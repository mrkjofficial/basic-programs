/* 100. Program to find greatest among 10 numbers in an array */

#include <iostream>
using namespace std;

void input(int[], int);
void print(int[], int);
int getMax(int[], int);

int main()
{
    int max = 0, size;
    cout << endl;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << endl;
    input(array, size);
    print(array, size);
    max = getMax(array, size);
    cout << endl;
    cout << "Max Element: " << max << endl;
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