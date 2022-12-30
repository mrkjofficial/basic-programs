# 27. Program to calculate sum of the digits of a given number

num = int(input("Enter a number: "))
sum = 0
while (num != 0):
    sum = sum + (num % 10)
    num = num // 10
print("Sum =", sum)
