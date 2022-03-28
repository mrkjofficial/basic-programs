/* 91. Program to sort an array with a recursive function */

#include <iostream>
using namespace std;

void input(int[], int);
void print(int[], int);
void sort(int[], int);
int getMaxIndex(int[], int);

int main()
{
    int size;
    cout << endl;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << endl;
    input(array, size);
    sort(array, size);
    print(array, size);
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

void sort(int array[], int size)
{
    if (size > 1)
    {
        int mIndex, temp;
        mIndex = getMaxIndex(array, size);
        temp = array[size - 1];
        array[size - 1] = array[mIndex];
        array[mIndex] = temp;
        sort(array, size - 1);
    }
}

int getMaxIndex(int array[], int size)
{
    int mIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[mIndex] < array[i])
        {
            mIndex = i;
        }
    }
    return mIndex;
}