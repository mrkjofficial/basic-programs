# 94. Pattern #19

#          A 1
#        A B 1 2
#      A B C 1 2 3
#    A B C D 1 2 3 4
#  A B C D E 1 2 3 4 5

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 10:
        k = 0
        for i in range(1, n+1):
            k = ord('A')
            for j in range(1, 2 * n + 1):
                if j >= n + 1 - i and j <= n + i:
                    if j == n + 1:
                        k = ord('1')
                    print(" " + chr(k), end="")
                    k += 1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 9!")