# 98. Pattern #22

#  * * * * *
#  * * * * *
#  * *   * *
#  * * * * *
#  * * * * *

import sys

while True:
    n = int(input("Enter the number of rows: "))
    m = (n + 1) // 2
    if n > 0 and n < 51 and n % 2 == 1:
        for i in range(1, n + 1):
            for j in range(1, n + 1):
                if i == 1 or i == n or j == 1 or j == n or (i >= m - 1 and i <= m + 1 and j >= m - 1 and j <= m + 1) and (i == m - 1 or i == m + 1 or j == m - 1 or j == m + 1):
                    print(" *", end="")
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter an odd value from 1 to 50!")