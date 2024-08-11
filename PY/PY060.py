# 60. Program to generate distinct numbers in given range & store in an array

import random

def randomize(array, min, max, size):
    i = 0
    while i < size:
        value = random.randint(min, max)
        if unique(array, i, value):
            array[i] = value
            i += 1

def unique(array, size, value):
    flag = True
    for i in range(size):
        if array[i] == value:
            flag = False
            break
    return flag

def printArray(array, size):
    print("The random elements of array are:")
    for i in range(size):
        print(array[i], end=" ")

while True:
    min, max = map(int, input("Enter a range (Lower Bound - Upper Bound): ").split())
    if max - min > 0:
        break
    else:
        print("Invalid Range!")
    
while True:
    size = int(input("Enter the size of the array: "))
    if size <= max - min:
        break
    else:
        print("Invalid Size!")

array = [0] * size
randomize(array, min, max, size)
printArray(array, size)