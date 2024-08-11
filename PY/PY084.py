# 84. Pattern #9

#  A B C D E D C B A
#  A B C D   D C B A
#  A B C       C B A
#  A B           B A
#  A               A

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 27:
        for i in range(1, n+1):
            k = 65
            for j in range(1, 2*n):
                if j <= n+1 - i or j >= n-1 + i:
                    print(" " + chr(k), end="")
                else:
                    print("  ", end="")
                k += 1 if j < n else -1
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 26!")