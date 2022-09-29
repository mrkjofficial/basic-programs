# 05. Program to swap two numbers without using 3rd variable

x, y = input("Enter two numbers: ").split()
x = int(x)
y = int(y)
print("Numbers before swapping:")
print("X =", x, "| Y =", y)
x = x ^ y
y = x ^ y
x = x ^ y
print("Numbers after swapping:")
print("X =", x, "| Y =", y)