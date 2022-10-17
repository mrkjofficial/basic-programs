# 26. Program to count digits of a given number

num = int(input("Enter a number: "))
digit = 0
while (num != 0):
    num = num // 10
    digit += 1
print("It is a", digit, "\b-digit number.")
