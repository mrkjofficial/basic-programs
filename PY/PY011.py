# 11. Program to calculate roots of a quadratic equation

from math import sqrt

a, b, c = input("Enter the coefficient of x^2, x & constant term: ").split()
a = int(a)
b = int(b)
c = int(c)
d = (b ** 2) - 4 * a * c
if (d > 0):
    x = (-b + sqrt(d)) / (2 * a)
    y = (-b - sqrt(d)) / (2 * a)
    print("Both roots are real & distinct:", x, "\b,", y, "\b.")
elif (d == 0):
    x = -b / (2.0 * a)
    print("Both roots are equal:", x, "\b.")
else:
    print("Both roots are imaginary.")