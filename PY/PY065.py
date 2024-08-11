# 65. Program to sort strings in dictionary order

size = int(input("Enter the size of the Array: "))
strArray = []
print("Enter", size, "Strings:")
for i in range(size):
    strArray.append(input())
strArray.sort(key=str.casefold)
print("Sorted Strings:")
for i in range(size):
    print(strArray[i], end=" ")