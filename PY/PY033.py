# 33. Program to print first N prime numbers

from math import sqrt


def isPrime(num):
    flag = False if num == 1 else True
    for i in range(2, int(sqrt(num)) + 1):
        if (num % i == 0):
            flag = False
    return flag


def printPrime(n):
    num = 2
    while (n > 0):
        if (isPrime(num)):
            print(num, " ", end="")
            n -= 1
        num += 1


n = int(input("Enter a value of N to print N prime numbers: "))
if (n <= 0):
    print("Invalid Input!")
else:
    printPrime(n)
