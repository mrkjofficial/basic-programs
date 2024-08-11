# 89. Pattern #14

#  4 3 2 1 0
#  3 2 1 0
#  2 1 0
#  1 0
#  0

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 11:
        k = n
        for i in range(1, n+1):
            for j in range(1, k+1):
                print(" " + str(k - j), end="")
            print()
            k -= 1
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 10!")