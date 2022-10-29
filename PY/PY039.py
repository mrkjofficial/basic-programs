# 39. Program to convert from Binary to Decimal (upto 10 digits input)

def toDecimal(bin):
    dec = 0
    i = 0
    while (bin > 0):
        rem = bin % 10
        dec = dec + rem * 2 ** i
        bin = bin // 10
        i += 1
    return dec


bin = int(input("Enter a binary number: "), 2)
dec = toDecimal(bin)
print("Decimal =", dec)
