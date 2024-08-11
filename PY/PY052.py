# 52. Program to calculate sum of squares of first N natural numbers with a recursive function

def sumOfSquares(n):
    if n == 1:
        return 1
    return n ** 2 + sumOfSquares(n - 1)

n = int(input("Enter the value of N to print the sum of squares of first N natural numbers: "))
sum = sumOfSquares(n)
print("Sum Of Squares:", sum)