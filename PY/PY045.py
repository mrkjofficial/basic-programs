# 45. Program to calculate factorial of a number with a recursive function

def factorial(n):
    if n > 0:
        return n * factorial(n - 1)
    else:
        return 1

n = int(input("Enter the number to calculate its factorial: "))
print(f"Factorial of {n} = {factorial(n)}")