# 09. Program to find the greater number among two numbers

x, y = input("Enter two numbers: ").split()
x = int(x)
y = int(y)
if (x > y):
    print(x, "is greater than", y, "\b.")
elif (x < y):
    print(y, "is greater than", x, "\b.")
else:
    print(x, "is equal to", y, "\b.")