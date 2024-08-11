# 72. Program to find a substring in a given string

str = "Lorem ipsum dolor sit amet consectetur adipiscing elit Suspendisse sollicitudin justo sapien sit amet mollis nulla gravida vitae"
print("String:")
print(str)
substring = input("Enter a String to search: ")
if substring in str:
    print("String found!")
else:
    print("String not found!")