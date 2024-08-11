# 103. Pattern #28

#          A
#        C B
#      F E D
#    J I H G
#  O N M L K

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 7:
        k = 0
        t = 64
        for i in range(1, n + 1):
            k = t + i
            t = t + i
            for j in range(1, n + 1):
                if j >= (n + 1) - i:
                    print(" " + chr(k), end="")
                    k -= 1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 6!")