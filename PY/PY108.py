# 108. Pattern #33

#  00
#  05 01
#  09 06 02
#  12 10 07 03
#  14 13 11 08 04

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 14:
        k = 0
        for i in range(1, n + 1):
            v = k
            for j in range(1, i + 1):
                print(" " + str(v).zfill(2), end="")
                v = v - (n - i + j)
            k = k + 1 + n - i
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 13!")