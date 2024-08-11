# 92. Pattern #17

#  * * * * *
#  * *   * *
#  *       *
#  * *   * *
#  * * * * *

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 51 and n % 2 != 0:
        m = (n + 1) // 2
        k = 0
        for i in range(1, n+1):
            k = k + (1 if i <= m else -1)
            for j in range(1, n+1):
                if j <= m + 1 - k or j >= m - 1 + k:
                    print(" *", end="")
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter an odd value from 1 to 50!")