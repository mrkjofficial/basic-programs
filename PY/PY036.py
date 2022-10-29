# 36. Program to check co-prime numbers

x, y = input("Enter two numbers: ").split()
x = int(x)
y = int(y)
flag = True
min = x if x < y else y
for i in range(2, min + 1):
    if (x % i == 0 and y % i == 0):
        flag = False
        break
if (flag):
    print(x, "&", y, "are co-prime numbers.")
else:
    print(x, "&", y, "are not co-prime numbers.")
