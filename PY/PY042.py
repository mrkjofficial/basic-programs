# 42. Program to print first n positive numbers with exactly two bits set (exactly two 1's in Binary Representation) (Logic #2)

n = int(input("Enter a value of N to print N positive numbers with two bits set: "))
i = 2
while n > 0:
    j = 1
    while j < i:
        print(i + j, end="\t")
        n -= 1
        if n == 0:
            break
        j *= 2
    i *= 2
