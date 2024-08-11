# 101. Pattern #26

#          1
#        2 1 2
#      3 2 1 2 3
#    4 3 2 1 2 3 4
#  5 4 3 2 1 2 3 4 5

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 10:
        for i in range(1, n + 1):
            k = i
            for j in range(1, 2 * n):
                if j >= (n + 1) - i and j <= (n - 1) + i:
                    print(" " + str(k), end="")
                    k += 1 if j < n else -1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 9!")