# 66. Program to check whether a string is palindrome or not

str = input("Enter a String: ")
if str == str[::-1]:
    print("It's a palindrome string!")
else:
    print("It's not a palindrome string!")