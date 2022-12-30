# 21. Program to calculate product of first N natural numbers

n = int(input("Enter a value to print product of first N natural numbers: "))
pro = 1
for i in range(1, n + 1):
    pro = pro * i
print("Product of first", n, "natural numbers is", pro)
