/* 54. Program to calculate determinant of any order with a recursive function */

#include <iostream>
using namespace std;

void input(int **, int);
int determinant(int **, int);
void createSubMatrix(int **, int **, int, int);

int main()
{
    int det = 0, size;
    cout << "Enter the size of the Matrix: ";
    cin >> size;
    int **array = new int *[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = new int[size];
    }
    input(array, size);
    det = determinant(array, size);
    cout << "Determinant: " << det << endl;
}

void input(int **array, int size)
{
    cout << "Enter the Matrix elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }
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
        int **sArray = new int *[size - 1];
        for (int i = 0; i < size - 1; i++)
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
            if (j != col)
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