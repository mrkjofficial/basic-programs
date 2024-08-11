# 58. Program to add two matrices

def inputMatrix(matrix, size):
    print(f"Enter the Matrix elements:")
    for i in range(size):
        matrix[i] = list(map(int, input().split()[:size]))

def addMatrices(A, B, C, size):
    for i in range(size):
        for j in range(size):
            C[i][j] = A[i][j] + B[i][j]

def printMatrix(matrix, size):
    for i in range(size):
        for j in range(size):
            print(matrix[i][j], end=" ")
        print()

size = int(input("Enter the size of the Matrices: "))
A = []
B = []
C = []
for i in range(size):
    A.append([0] * size)
    B.append([0] * size)
    C.append([0] * size)
inputMatrix(A, size)
inputMatrix(B, size)
addMatrices(A, B, C, size)
print("Sum of 1st & 2nd Matrices:")
printMatrix(C, size)