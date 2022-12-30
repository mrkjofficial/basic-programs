/* 84. Pattern #9

 A B C D E D C B A
 A B C D   D C B A
 A B C       C B A
 A B           B A
 A               A

*/

import java.util.Scanner;

public class JAVA084 {
    public static void main(String[] args) {
        int k, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 27) {
                for (int i = 1; i <= n; i++) {
                    k = 65;
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j <= n + 1 - i || j >= n - 1 + i) {
                            System.out.print(" " + (char) k);
                        } else {
                            System.out.print("  ");
                        }
                        k += j < n ? 1 : -1;
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