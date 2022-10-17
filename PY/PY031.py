# 31. Program to calculate H.C.F of two numbers

x, y = input("Enter two numbers: ").split()
x = int(x)
y = int(y)
min = x if x < y else y
i = min
for i in range(min, 0, -1):
    if (x % i == 0 and y % i == 0):
        break
print("H.C.F =", i)
