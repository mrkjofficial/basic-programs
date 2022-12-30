# 39. Program to convert from Binary to Decimal (upto 10 digits input)

while(True):
    bin = input("Enter a binary number: ")
    if (len(bin) > 10):
        print("Binary number should be 10 digits or less!")
    else:
        break
try:
    dec = int(bin, 2)
    print("Decimal =", dec)
except ValueError:
    print("Invalid Binary Number!")
