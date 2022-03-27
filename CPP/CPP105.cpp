/* 105. Program to rotate an array by n positions */

#include <iostream>
using namespace std;

void input(int[], int);
void rotate(int[], int, int, int);
void print(int[], int);

int main()
{
    int choice, rotation, size;
    cout << endl;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << endl;
    int array[size];
    input(array, size);
    cout << "Choose Direction for Rotation:" << endl;
    cout << "1. Left" << endl;
    cout << "2. Right" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;
    while (true)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter no. of rotations: ";
            cin >> rotation;
            rotate(array, choice, rotation, size);
            print(array, size);
            exit(0);
        case 2:
            cout << "Enter no. of rotations: ";
            cin >> rotation;
            rotate(array, choice, rotation, size);
            print(array, size);
            exit(0);
        default:
            cout << "Invalid Choice!";
        }
    }
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

void rotate(int array[], int choice, int rotation, int size)
{
    int temp;
    while (rotation)
    {
        if (choice == 1)
        {
            temp = array[0];
            for (int i = 0; i < size - 1; i++)
            {
                array[i] = array[i + 1];
            }
            array[size - 1] = temp;
        }
        else if (choice == 2)
        {
            temp = array[size - 1];
            for (int i = size - 1; i > 0; i--)
            {
                array[i] = array[i - 1];
            }
            array[0] = temp;
        }
        rotation--;
    }
}

void print(int array[], int size)
{
    cout << endl;
    cout << "The array elements are:" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}