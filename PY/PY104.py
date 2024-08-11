# 104. Pattern #29

#                  *
#                * *
#              * * *
#            * * * *
#          * * * * *
#          | * * * *
#  *       |   * * *
#  * *     |     * *
#  * * *   |       *
#  * * * * |
#  * * * * *
#  * * * *
#  * * *
#  * *
#  *

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 21:
        for i in range(1, 3 * n + 1):
            for j in range(1, 2 * n):
                if i <= n:
                    if j >= 2 * n - i:
                        print(" *", end="")
                    else:
                        print("  ", end="")
                elif i <= 2 * n:
                    if j == n:
                        print(" |", end="")
                    elif j <= i - n - 1 or j >= i:
                        print(" *", end="")
                    else:
                        print("  ", end="")
                elif i <= 3 * n:
                    if j <= 3 * n + 1 - i:
                        print(" *", end="")
                    else:
                        print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 20!")