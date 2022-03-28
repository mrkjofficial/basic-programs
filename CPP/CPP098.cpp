/* 98. Program to calculate determinant of any order with a recursive function */

#include <iostream>
using namespace std;

void input(int **, int);
void print(int **, int);
int determinant(int **, int);
void createSubMatrix(int **, int **, int, int);

int main()
{
    int det = 0, size;
    cout << endl;
    cout << "Enter the size of the Matrix: ";
    cin >> size;
    int **array = new int *[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = new int[size];
    }
    cout << endl;
    input(array, size);
    print(array, size);
    det = determinant(array, size);
    cout << "Determinant: " << det << endl;
}

void input(int **array, int size)
{
    cout << "Enter the Matrix elements:" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << endl;
}

void print(int **array, int size)
{
    cout << "The Matrix elements are:" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int determinant(int **array, int size)
{
    if (size == 1)
    {
        return array[0][0];
    }
    int det = 0, sign = 1;
    for (int col = 0; col < size; col++)
    {
        int m = 0, n = 0;
        int **sArray = new int *[size - 1];
        for (int i = 0; i < size; i++)
        {
            sArray[i] = new int[size - 1];
        }
        createSubMatrix(array, sArray, col, size);
        det += (sign * array[0][col]) * determinant(sArray, size - 1);
        sign *= (-1);
    }
    return det;
}

void createSubMatrix(int **array, int **sArray, int col, int size)
{
    int m = 0, n = 0;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != 0 && j != col)
            {
                sArray[m][n] = array[i][j];
                if (n < size - 2)
                {
                    n++;
                }
                else
                {
                    n = 0;
                    m++;
                }
            }
        }
    }
}