# 23. Program to calculate sum of first N even natural numbers

n = int(input("Enter a value to print sum of first N even natural numbers: "))
sum = 0
for i in range(1, n + 1):
    sum = sum + 2 * i
print("Sum of first", n, "even natural numbers is", sum)
