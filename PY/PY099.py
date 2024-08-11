# 99. Pattern #24

#      0
#    1 2 1
#  2 3 4 3 2
#    1 2 1
#      0

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 51 and n % 2 == 1:
        k = 0
        m = (n + 1) // 2
        for i in range(1, n + 1):
            k += 1 if i <= m else -1
            p = k - 1
            for j in range(1, n + 1):
                if j >= m + 1 - k and j <= m - 1 + k:
                    print(" " + str(p % 10), end="")
                    p += 1 if j < m else -1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a odd value from 1 to 50!")