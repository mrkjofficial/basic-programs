# 61. Program to rotate an array by n positions

def inputArray(array, size):
    print("Enter the array elements:")
    array[:] = list(map(int, input().split()))

def rotateArray(array, choice, rotation, size):
    while rotation > 0:
        if choice == 1:
            temp = array[0]
            for i in range(size - 1):
                array[i] = array[i + 1]
            array[size - 1] = temp
        elif choice == 2:
            temp = array[size - 1]
            for i in range(size - 1, 0, -1):
                array[i] = array[i - 1]
            array[0] = temp
        rotation -= 1

def printArray(array, size):
    print("The array elements are:")
    for i in range(size):
        print(array[i], end=" ")

size = int(input("Enter the size of the array: "))
array = [0] * size
inputArray(array, size)
print("Choose Direction for Rotation:")
print("1. Left")
print("2. Right")
choice = int(input("Enter your choice: "))
while True:
    if choice == 1:
        rotation = int(input("Enter no. of rotations: "))
        rotateArray(array, choice, rotation, size)
        printArray(array, size)
        break
    elif choice == 2:
        rotation = int(input("Enter no. of rotations: "))
        rotateArray(array, choice, rotation, size)
        printArray(array, size)
        break
    else:
        print("Invalid Choice!")