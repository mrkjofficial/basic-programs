# 55. Program to calculate sum of all even numbers and sum of all odd numbers in an array

def inputArray(array, size):
    print("Enter the array elements:")
    array[:] = list(map(int, input().split()[:size]))

def calculateSum(array, size):
    evenSum = 0
    oddSum = 0
    for i in range(size):
        if array[i] % 2 == 1:
            oddSum += array[i]
        else:
            evenSum += array[i]
    print("Sum Of Even Elements:", evenSum)
    print("Sum Of Odd Elements:", oddSum)

size = int(input("Enter the size of the array: "))
array = [0 for i in range(size)]
inputArray(array, size)
calculateSum(array, size)

