/* 88. Pattern #13

         1
       2 3 2
     3 4 5 4 3
   4 5 6 7 6 5 4
 5 6 7 8 9 8 7 6 5

*/

import java.util.Scanner;

public class JAVA088 {
    public static void main(String[] args) {
        int k, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 6) {
                for (int i = 1; i <= n; i++) {
                    k = i;
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j >= (n + 1) - i && j <= (n - 1) + i) {
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
                System.out.println("Please enter a value from 1 to 5!");
            }
        }
    }
}