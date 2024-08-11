# 43. Program to print 1 + (1+2) + (1+2+3) + … + (1+2+3+…+N)

def sum(n):
    sum = 0
    for i in range(1, n+1):
        sum += i
    return sum

n = int(input("Enter a value of N to print 1 + (1+2) + (1+2+3) + … + (1+2+3+…+N): "))
s = 0
for i in range(1, n+1):
    s += sum(i)
print(f"Sum of {n} numbers in the series is {s}!")
