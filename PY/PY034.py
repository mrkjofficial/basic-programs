# 34. Program to print all prime numbers between two given numbers

x, y = input("Enter a range to print prime numbers: ").split()
x = int(x)
y = int(y)
print("The prime numbers are as follows:")
ub = x if x > y else y
lb = x if x < y else y
j = 0
for i in range(lb, ub):
    for j in range(2, i + 1):
        if (i % j == 0):
            break
    if (i == j):
        print(i, "\t", end="")
