# 24. Program to calculate sum of first N odd natural numbers

n = int(input("Enter a value to print sum of first N odd natural numbers: "))
sum = 0
for i in range(n):
    sum = sum + 2 * i + 1
print("Sum of first", n, "odd natural numbers is", sum)
