# 68. Program to reverse a string word wise

str = input("Enter a String: ")
strArray = str.split(" ")
print("Reversed String (Word Wise): ", end="")
for i in range(len(strArray) - 1, -1, -1):
    print(strArray[i], end=" ")