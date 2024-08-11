# 107. Pattern #32

#  A B C D E F G H I
#  A B C D   F G H I
#  A B C       G H I
#  A B           H I
#  A               I

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 14:
        for i in range(1, n + 1):
            k = 65
            for j in range(1, 2 * n):
                if j <= n + 1 - i or j >= n - 1 + i:
                    print(" " + chr(k), end="")
                    k += 1
                else:
                    print("  ", end="")
                    k += 1
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 13!")