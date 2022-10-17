# 29. Program to print all Armstrong numbers under 1000

print("Armstrong numbers under 1000 are as follows:")
for num in range(1, 1001):
    temp = num
    newNum = 0
    digits = len(str(num))
    while (temp != 0):
        rem = temp % 10
        newNum = newNum + rem ** digits
        temp = temp // 10
    if (newNum == num):
        print(num, "\t", end="")
