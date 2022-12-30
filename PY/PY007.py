# 07. Program to find even/odd number without using Modulus/Bitwise operator

num = int(input("Enter a number: "))
if (num // 2 * 2 != num):
    print(num, "is an odd number.")
else:
    print(num, "is an even number.")