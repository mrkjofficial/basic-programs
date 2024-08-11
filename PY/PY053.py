# 53. Program to calculate sum of cubes of first N natural numbers with a recursive function

def sumOfCubes(n):
    if n == 1:
        return 1
    return n ** 3 + sumOfCubes(n - 1)

n = int(input("Enter the value of N to print the sum of cubes of first N natural numbers: "))
sum = sumOfCubes(n)
print("Sum Of Cubes:", sum)