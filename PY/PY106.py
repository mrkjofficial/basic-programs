# 106. Pattern #31

#  *       *
#    *   *
#      *
#    *   *
#  *       *

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 51:
        for i in range(1, n + 1):
            for j in range(1, n + 1):
                if j == i or j == n + 1 - i:
                    print(" *", end="")
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 50!")