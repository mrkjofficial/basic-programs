# 35. Program to print all prime factors of a given number

num = int(input("Enter a number: "))
print("The prime factors are as follows:")
i = 2
while(num > 1):
    while (num % i == 0):
        print(i, "\t", end="")
        num = num // i
    i += 1