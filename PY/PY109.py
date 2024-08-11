# 109. Pattern #34

#  00
#  00 01
#  00 02 04
#  00 03 06 09
#  00 04 08 12 16

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 11:
        for i in range(1, n + 1):
            k = 0
            for j in range(1, n + 1):
                if j <= i:
                    print(" " + str(k).zfill(2), end="")
                    k = k + i - 1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 10!")