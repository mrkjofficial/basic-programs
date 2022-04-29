/* 98. Pattern #22

 * * * * *
 * * * * *
 * *   * *
 * * * * *
 * * * * *

*/

import java.util.Scanner;

public class JAVA098 {
    public static void main(String[] args) {
        int m, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            m = (n + 1) / 2;
            if (n > 0 && n < 51 && n % 2 == 1) {
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (i == 1 || i == n || j == 1 || j == n || (i >= m - 1 && i <= m + 1 && j >= m - 1 && j <= m + 1) && (i == m - 1 || i == m + 1 || j == m - 1 || j == m + 1)) {
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
                System.out.println("Please enter an odd value from 1 to 50!");
            }
        }
    }
}
