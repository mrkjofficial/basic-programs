# 47. Program to sort an array with a recursive function

def inputArray(array, size):
    print("Enter the array elements:")
    array[:] = list(map(int, input().split()[:size]))

def printArray(array, size):
    print("The array elements are:")
    for i in range(size):
        print(array[i], end=" ")

def sortArray(array, size):
    if size > 1:
        mIndex = getMaxIndex(array, size)
        temp = array[size - 1]
        array[size - 1] = array[mIndex]
        array[mIndex] = temp
        sortArray(array, size - 1)

def getMaxIndex(array, size):
    mIndex = 0
    for i in range(1, size):
        if array[mIndex] < array[i]:
            mIndex = i
    return mIndex

size = int(input("Enter the size of the array: "))
array = [0] * size
inputArray(array, size)
sortArray(array, size)
printArray(array, size)