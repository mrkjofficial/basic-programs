# 57. Program to find smallest among the numbers in an array

def inputArray(array, size):
    print("Enter the array elements:")
    array[:] = list(map(int, input().split()[:size]))

def getMin(array, size):
    min = array[0]
    for i in range(1, size):
        if min > array[i]:
            min = array[i]
    return min

size = int(input("Enter the size of the array: "))
array = [0] * size
inputArray(array, size)
min = getMin(array, size)
print("Min Element:", min)