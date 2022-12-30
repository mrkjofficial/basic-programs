# 18. Program to print first N odd natural numbers in reverse order

num = int(input("Enter a value to print N odd natural numbers in reverse: "))
for i in range(num, 0, -1):
    print(2 * i - 1, "", end="")