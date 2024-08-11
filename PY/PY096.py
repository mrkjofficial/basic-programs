# 96. Pattern #21

#          1
#        1 2 A
#      1 2 3 A B
#    1 2 3 4 A B C
#  1 2 3 4 5 A B C D

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 10:
        for i in range(1, n+1):
            k = ord('1')
            for j in range(1, 2 * n):
                if j >= n + 1 - i and j <= n - 1 + i:
                    if j == n + 1:
                        k = ord('A')
                    print(" " + chr(k), end="")
                    k += 1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 9!")