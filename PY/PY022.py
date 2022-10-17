# 22. Program to calculate factorial of a number

n = int(input("Enter a number to find its factorial: "))
fac = 1
for i in range(1, n + 1):
    fac = fac * i
print("Factorial of", n, "is", fac)
