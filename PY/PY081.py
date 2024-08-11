# 81. Pattern #6

#          *
#        *   *
#      *   *   *
#    *   *   *   *
#  *   *   *   *   *

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 51:
        for i in range(1, n+1):
            k = True
            for j in range(1, 2*n):
                if j >= (n+1) - i and j <= (n-1) + i and k:
                    print(" *", end="")
                    k = False
                else:
                    print("  ", end="")
                    k = True
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 50!")