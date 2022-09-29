# 06. Program to find even/odd number using Bitwise operator

num = int(input("Enter a number: "))
if (num & 1):
    print(num, "is an odd number.")
else:
    print(num, "is an even number.")