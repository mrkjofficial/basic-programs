# 41. Program to print first n positive numbers with exactly two bits set (exactly two 1's in Binary Representation) (Logic #1)

n = int(input("Enter a value of N to print N positive numbers with two bits set: "))
num = 3
while n > 0:
    bNum = num
    count = 0
    while bNum > 0:
        if bNum % 2 == 1:
            count += 1
        bNum = bNum // 2
    if count == 2:
        print(num, end="\t")
        n -= 1
    num += 1