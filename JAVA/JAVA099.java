/* 99. Pattern #24

     0
   1 2 1
 2 3 4 3 2
   1 2 1
     0

*/

import java.util.Scanner;

public class JAVA099 {
    public static void main(String[] args) {
        int k = 0, m, n, p = 1;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            m = (n + 1) / 2;
            if (n > 0 && n < 51 && n % 2 == 1) {
                for (int i = 1; i <= n; i++) {
                    k += i <= m ? 1 : -1;
                    p = k - 1;
                    for (int j = 1; j <= n; j++) {
                        if (j >= m + 1 - k && j <= m - 1 + k) {
                            System.out.print(" " + (p % 10));
                            p += j < m ? 1 : -1;
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a odd value from 1 to 50!");
            }
        }
    }
}
