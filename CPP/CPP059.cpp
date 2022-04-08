/* 59. Program to multiply two matrices */

#include <iostream>
using namespace std;

void input(int **, int **, int);
void multiply(int **, int **, int **, int);
void print(int **, int);

int main()
{
    int size;
    cout << "Enter the size of the Matrices: ";
    cin >> size;
    int **A = new int *[size];
    int **B = new int *[size];
    int **C = new int *[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = new int[size];
        B[i] = new int[size];
        C[i] = new int[size];
    }
    input(A, B, size);
    multiply(A, B, C, size);
    cout << "Product of 1st & 2nd Matrices:" << endl;
    print(C, size);
}

void input(int **A, int **B, int size)
{
    cout << "Enter 1st Matrix elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter 2nd Matrix elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> B[i][j];
        }
    }
}

void multiply(int **A, int **B, int **C, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int total = 0;
            for (int k = 0; k < size; k++)
            {
                total += A[i][k] * B[k][j];
            }
            C[i][j] = total;
        }
    }
}

void print(int **array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}