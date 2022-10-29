# 38. Program to print a number with a summation of 2 prime numbers

from math import sqrt


def isPrime(n):
    flag = False if n == 1 else True
    for i in range(2, int(sqrt(n)) + 1):
        if (n % i == 0):
            flag = False
    return flag


def nextPrime(n):
    while (True):
        n += 1
        if (isPrime(n)):
            break
    return n


while (True):
    n = int(input("Enter the number to represent it with a pair of prime numbers: "))
    if (n > 0 and n < 100):
        i = 2
        while (i <= n - i):
            if (isPrime(n - i)):
                print(i, "+", (n - i), "=", n)
                flag = True
            i = nextPrime(i)
        if (not (flag)):
            print(n, "can't be represented with a pair of 2 prime numbers!")
        exit(0)
    else:
        print("Please enter a value from 1 to 99!")
