# 90. Pattern #15

#      1
#    1 2
#  1 2 3
#    1 2
#      1

import sys

while True:
    n = int(input("Enter the number of rows: "))
    if n > 0 and n < 18:
        m = (n + 1) // 2
        k = 0
        for i in range(1, n+1):
            k = k + (1 if i < (m+1) else -1)
            x = 1
            for j in range(1, m+1):
                if j >= m - k + 1:
                    print(" " + str(x), end="")
                    x += 1
                else:
                    print("  ", end="")
            print()
        sys.exit(0)
    else:
        print("Please enter a value from 1 to 17!")