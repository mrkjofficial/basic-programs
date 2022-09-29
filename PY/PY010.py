# 10. Program to find the greater number among three numbers

x, y, z = input("Enter three numbers: ").split()
x = int(x)
y = int(y)
z = int(z)
if (x > y):
    if (x > z):
        print(x, "is greatest.")
    else:
        print(z, "is greatest.")
elif (x < y):
    if (y > z):
        print(y, "is greatest.")
    else:
        print(z, "is greatest.")
else:
    print("All three numbers are equal.")