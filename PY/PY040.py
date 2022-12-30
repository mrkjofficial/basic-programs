# 40. Program to convert from Binary to Decimal (Extended Range)

bin = input("Enter a binary number: ")
try:
    dec = int(bin, 2)
    print("Decimal =", dec)
except ValueError:
    print("Invalid Binary Number!")
