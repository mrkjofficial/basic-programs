/* 90. Pattern #15

     1
   1 2
 1 2 3
   1 2
     1

*/

import java.util.Scanner;

public class JAVA090 {
    public static void main(String[] args) {
        int k = 0, m, n, x;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            m = (n + 1) / 2;
            if (n > 0 && n < 18) {
                for (int i = 1; i <= n; i++) {
                    k += i < (m + 1) ? 1 : -1;
                    x = 1;
                    for (int j = 1; j <= m; j++) {
                        if (j >= m - k + 1) {
                            System.out.print(" " + x);
                            x++;
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 17!");
            }
        }
    }
}