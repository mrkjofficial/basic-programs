# 15. Program to print first N even natural numbers

num = int(input("Enter a value to print N even natural numbers: "))
for i in range(1, num + 1):
    print(2 * i, "", end="")