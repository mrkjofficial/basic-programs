/* 83. Pattern #8

         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
 1 2 3 4 5 4 3 2 1

*/

import java.util.Scanner;

public class JAVA083 {
    public static void main(String[] args) {
        int k, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 10) {
                for (int i = 1; i <= n; i++) {
                    k = 1;
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j >= (n + 1) - i && j <= (n - 1) + i && k > 0) {
                            System.out.print(" " + k);
                            k += j < n ? 1 : -1;
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 9!");
            }
        }
    }
}