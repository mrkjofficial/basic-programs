/* 82. Pattern #7

 * * * * * * * * *
 * * * *   * * * *
 * * *       * * *
 * *           * *
 *               *

*/

import java.util.Scanner;

public class JAVA082 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 51) {
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j <= n + 1 - i || j >= n - 1 + i) {
                            System.out.print(" *");
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 50!");
            }
        }
    }
}