/* 60. Program to generate 10 distinct number in given range & store in an array */

#include <iostream>
using namespace std;

void randomize(int[], int, int, int);
bool unique(int[], int, int);
void print(int[], int);

int main()
{
    int min, max, size;
    while (true)
    {
        cout << endl;
        cout << "Enter a range (Lower Bound - Upper Bound): ";
        cin >> min >> max;
        if (max - min > 0)
        {
            break;
        }
        else
        {
            cout << endl;
            cout << "Invalid Range!" << endl;
        }
    }
    while (true)
    {
        cout << endl;
        cout << "Enter the size of the array: ";
        cin >> size;
        if (size <= max - min)
        {
            break;
        }
        else
        {
            cout << endl;
            cout << "Invalid Size!" << endl;
        }
    }
    int array[size];
    randomize(array, min, max, size);
    print(array, size);
}

void randomize(int array[], int min, int max, int size)
{
    int value;
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        value = (rand() % (max + 1 - min)) + min;
        if (unique(array, i - 1, value))
        {
            array[i] = value;
        }
        else
        {
            i--;
        }
    }
}

bool unique(int array[], int size, int value)
{
    int flag = true;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void print(int array[], int size)
{
    cout << endl;
    cout << "The random elements of array are:" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}