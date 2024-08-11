# 50. Program to calculate sum of digits of a number with a recursive function

def sumOfDigits(num):
    if num == 0:
        return 0
    sum = 0
    sum += num % 10
    num = num // 10
    return sum + sumOfDigits(num)

num = int(input("Enter a number: "))
sum = sumOfDigits(num)
print("Sum of Digits:", sum)