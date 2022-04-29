/* 104. Pattern #29

                 *
               * *
             * * *
           * * * *
         * * * * *
         | * * * *
 *       |   * * *
 * *     |     * *
 * * *   |       *
 * * * * |
 * * * * *
 * * * *
 * * *
 * *
 *

*/

import java.util.Scanner;

public class JAVA104 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 21) {
                for (int i = 1; i <= 3 * n; i++) {
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (i <= n) {
                            if (j >= 2 * n - i) {
                                System.out.print(" *");
                            } else {
                                System.out.print("  ");
                            }
                        } else if (i <= 2 * n) {
                            if (j == n) {
                                System.out.print(" |");
                            } else if (j <= (i - n - 1) || j >= i) {
                                System.out.print(" *");
                            } else {
                                System.out.print("  ");
                            }
                        } else if (i <= 3 * n) {
                            if (j <= 3 * n + 1 - i) {
                                System.out.print(" *");
                            } else {
                                System.out.print("  ");
                            }
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 20!");
            }
        }
    }
}
