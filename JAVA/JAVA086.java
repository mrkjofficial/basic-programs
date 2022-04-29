/* 86. Pattern #11

 *
 * *
 * * *
 * *
 *

*/

import java.util.Scanner;

public class JAVA086 {
    public static void main(String[] args) {
        int k = 0, m, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 51) {
                m = (n + 1) / 2;
                for (int i = 1; i <= n; i++) {
                    if (n % 2 == 0) {
                        if (i <= m) {
                            k++;
                        } else if (i > m + 1) {
                            k--;
                        }
                    } else {
                        k += i <= m ? 1 : -1;
                    }
                    for (int j = 1; j <= k; j++) {
                        System.out.print(" *");
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