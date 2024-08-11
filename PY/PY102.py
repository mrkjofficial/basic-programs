# 102. Pattern #27

#  01
#  03 * 02
#  04 * 05 * 06
#  10 * 09 * 08 * 07
#  11 * 12 * 13 * 14 * 15

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 13:
        t = 0
        for i in range(1, n + 1):
            k = t + 1 if i % 2 == 1 else t + i
            t += i
            for j in range(1, 1 + 2 * (i - 1) + 1):
                if j % 2 == 1:
                    print(" " + str(k).zfill(2), end="")
                    k += 1 if i % 2 == 1 else -1
                else:
                    print(" *", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 12!")