# 30. Program to calculate L.C.M of two numbers

x, y = input("Enter two numbers: ").split()
x = int(x)
y = int(y)
max = x if x > y else y
i = max
for i in range(max, x * y + 1, max):
    if (i % x == 0 and i % y == 0):
        break
print("L.C.M = ", i)
