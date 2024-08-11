# 110. Program to print a Pascal Triangle

#              01
#           01    01
#        01    02    01      
#     01    03    03    01   
#  01    04    06    04    01

import sys

def factorial(n):
    if n > 0:
        return n * factorial(n - 1)
    else:
        return 1

def combination(n, r):
    return factorial(n) // (factorial(n - r) * factorial(r))

def pascal(n):
    for i in range(1, n + 1):
        k = True
        r = 0
        for j in range(1, 2 * n):
            if j >= n + 1 - i and j <= n - 1 + i and k:
                print(" " + str(combination(i - 1, r)).zfill(2), end="")
                k = False
                r += 1
            else:
                print("   ", end="")
                k = True
        print()

while True:
    n = int(input("Enter the number of rows to print a Pascal Triangle: "))
    if n > 0 and n < 10:
        pascal(n)
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 9!")