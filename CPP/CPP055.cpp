/* 55. Program to calculate sum of all even numbers and sum of all odd numbers in an array */

#include <iostream>
using namespace std;

void input(int[], int);
void calculateSum(int[], int);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    input(array, size);
    calculateSum(array, size);
}

void input(int array[], int size)
{
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void calculateSum(int array[], int size)
{
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2)
        {
            oddSum += array[i];
        }
        else
        {
            evenSum += array[i];
        }
    }
    cout << "Sum Of Even Elements: " << evenSum << endl;
    cout << "Sum Of Odd Elements: " << oddSum << endl;
}