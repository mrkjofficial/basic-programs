# 100. Pattern #25

#  A
#  B A
#  C B A
#  D C B A
#  E D C B A

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 27:
        k = 0
        for i in range(1, n + 1):
            k = 64 + i
            for j in range(1, n + 1):
                if j <= i:
                    print(" " + chr(k), end="")
                    k -= 1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 26!")