# 105. Pattern #30

#          1
#        A   B
#      1   2   3
#    A   B   C   D
#  1   2   3   4   5

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 10:
        for i in range(1, n + 1):
            k = True
            p = 1
            for j in range(1, 2 * n):
                if j >= (n + 1) - i and j <= (n - 1) + i and k == True:
                    if i % 2 == 0:
                        print(" " + chr(p + 64), end="")
                    else:
                        print(" " + str(p), end="")
                    p += 1
                    k = False
                else:
                    print("  ", end="")
                    k = True
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 9!")