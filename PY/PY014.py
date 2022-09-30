# 14. Program to print first N natural numbers in reverse order

n = int(input("Enter a value to print N natural numbers in reverse: "))
for i in range(n, 0, -1):
    print(i, "", end="")