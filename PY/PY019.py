# 19. Program to print table of user’s choice

num = int(input("Enter a number to print its table: "))
for i in range(1, 11):
    print(num, "x", str(i).zfill(2), "=", num * i)