# 37. Program to print N co-prime numbers

n = int(input("Enter a number to print co-prime numbers: "))
print("The co-prime numbers are as follows:")
y = 2
while (True):
    for x in range(2, y + 1):
        flag = True;
        min = x if x < y else y
        for i in range(2, min + 1):
            if (x % i == 0 and y % i == 0):
                flag = False
                break
        if (flag):
            print("(", x, ",", y, ")")
            n -= 1
            if (n == 0):
                exit(0)
    y += 1