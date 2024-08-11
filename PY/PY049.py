# 49. Program to print first N natural numbers in reverse order with a recursive function

def generateNum(n):
    if n > 0:
        print(n, end=" ")
        generateNum(n - 1)

n = int(input("Enter the value of N to print N numbers in reverse: "))
print("The N numbers are:")
generateNum(n)