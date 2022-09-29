# 04. Program to swap two numbers

x, y = input("Enter two numbers: ").split()
x = int(x)
y = int(y)
print("Numbers before swapping:")
print("X =", x, "| Y =", y)
temp = x
x = y
y = temp
print("Numbers after swapping:")
print("X =", x, "| Y =", y)