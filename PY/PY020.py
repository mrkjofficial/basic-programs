# 20. Program to calculate sum of first N natural numbers

n = int(input("Enter a value to print sum of first N natural numbers: "))
sum = 0
for i in range(1, n + 1):
    sum = sum + i
print("Sum of first", n, "natural numbers is", sum)