/* 93. Pattern #18

         A
       A B A
     A B C B A
   A B C D C B A
 A B C D E D C B A

*/

import java.util.Scanner;

public class JAVA093 {
    public static void main(String[] args) {
        int k = 0, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 27) {
                for (int i = 1; i <= n; i++) {
                    k = 65;
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j >= n + 1 - i && j <= n - 1 + i) {
                            System.out.print(" " + (char) k);
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
                System.out.println("Please enter a value from 1 to 26!");
            }
        }
    }
}