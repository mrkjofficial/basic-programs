# 28. Program to reverse a number

num = int(input("Enter a number: "))
rNum = 0
while (num != 0):
    rNum = rNum * 10 + (num % 10)
    num = num // 10
print("Reversed Number =", rNum)
