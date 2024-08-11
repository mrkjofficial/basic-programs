# 48. Program to print first N natural numbers with a recursive function

def generateNum(n):
    if n > 0:
        generateNum(n - 1)
        print(n, end=" ")

n = int(input("Enter the value of N to print N numbers: "))
print("The N numbers are:")
generateNum(n)