/* 94. Pattern #19

         A 1
       A B 1 2
     A B C 1 2 3
   A B C D 1 2 3 4
 A B C D E 1 2 3 4 5

*/

import java.util.Scanner;

public class JAVA094 {
    public static void main(String[] args) {
        int k = 0, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 10) {
                for (int i = 1; i <= n; i++) {
                    k = 'A';
                    for (int j = 1; j <= 2 * n; j++) {
                        if (j >= n + 1 - i && j <= n + i) {
                            if (j == n + 1) {
                                k = '1';
                            }
                            System.out.print(" " + (char) k);
                            k++;
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