# 51. Program to calculate sum of squares of digits of a number with a recursive function

def sumOfDigitSquare(num):
    if num == 0:
        return 0
    sum = 0
    sum += (num % 10) ** 2
    num = num // 10
    return sum + sumOfDigitSquare(num)

num = int(input("Enter a number: "))
sum = sumOfDigitSquare(num)
print("Sum Of Digit Squares:", sum)