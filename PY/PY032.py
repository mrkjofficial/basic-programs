# 32. Program to check whether a given number is prime or not

from math import sqrt


num = int(input("Enter a number: "))
flag = {False: True, True: False}[num == 1]
for i in range(2, int(sqrt(num)) + 1):
    if (num % i == 0):
        flag = False
        break
if (flag == True):
    print(num, "is a prime number.")
else:
    print(num, "is not a prime number.")
