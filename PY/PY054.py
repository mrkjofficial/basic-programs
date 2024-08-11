# 54. Program to calculate determinant of any order with a recursive function

def inputMatrix(array, size):
    print("Enter the Matrix elements:")
    for i in range(size):
        array[i] = list(map(int, input().split()[:size]))

def findDeterminant(array, size):
    if size == 1:
        return array[0][0]
    det = 0
    sign = 1
    for col in range(size):
        sArray = [[0 for i in range(size - 1)] for j in range(size - 1)]
        createSubMatrix(array, sArray, col, size)
        det += (sign * array[0][col]) * findDeterminant(sArray, size - 1)
        sign *= (-1)
    return det

def createSubMatrix(array, sArray, col, size):
    m = 0
    n = 0
    for i in range(1, size):
        for j in range(size):
            if j != col:
                sArray[m][n] = array[i][j]
                if n < size - 2:
                    n += 1
                else:
                    n = 0
                    m += 1

size = int(input("Enter the size of the Matrix: "))
array = [[0 for i in range(size)] for j in range(size)]
inputMatrix(array, size)
det = findDeterminant(array, size)
print("Determinant:", det)