# 56. Program to find greatest among the numbers in an array

def inputArray(array, size):
    print("Enter the array elements:")
    array[:] = list(map(int, input().split()[:size]))

def getMax(array, size):
    max = array[0]
    for i in range(1, size):
        if max < array[i]:
            max = array[i]
    return max

size = int(input("Enter the size of the array: "))
array = [0] * size
inputArray(array, size)
max = getMax(array, size)
print("Max Element:", max)