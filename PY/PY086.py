# 86. Pattern #11

#  *
#  * *
#  * * *
#  * *
#  *

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 51:
        m = (n + 1) // 2
        k = 0
        for i in range(1, n+1):
            if n % 2 == 0:
                if i <= m:
                    k += 1
                elif i > m + 1:
                    k -= 1
            else:
                k += 1 if i <= m else -1
            for j in range(1, k+1):
                print(" *", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 50!")