# 46. Program to print fibonacci series of n numbers with a recursive function

def fibonacci(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input("Enter a value of n to print fibonacci series of n numbers: "))
print("Fibonacci Series:")
for i in range(1, n+1):
    print("\t", fibonacci(i), end="")
