# 59. Program to multiply two matrices

def inputMatrices(A, B, size):
    print("Enter 1st Matrix elements:")
    for i in range(size):
        A[i] = list(map(int, input().split()[:size]))
    print("Enter 2nd Matrix elements:")
    for i in range(size):
        B[i] = list(map(int, input().split()[:size]))

def multiplyMatrices(A, B, C, size):
    for i in range(size):
        for j in range(size):
            total = 0
            for k in range(size):
                total += A[i][k] * B[k][j]
            C[i][j] = total

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
inputMatrices(A, B, size)
multiplyMatrices(A, B, C, size)
print("Product of 1st & 2nd Matrices:")
printMatrix(C, size)