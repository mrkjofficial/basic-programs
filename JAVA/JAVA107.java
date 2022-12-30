/* 107. Pattern #32

 A B C D E F G H I
 A B C D   F G H I
 A B C       G H I
 A B           H I
 A               I

*/

import java.util.Scanner;

public class JAVA107 {
    public static void main(String[] args) {
        int k, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 14) {
                for (int i = 1; i <= n; i++) {
                    k = 65;
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j <= n + 1 - i || j >= n - 1 + i) {
                            System.out.print(" " + (char) k);
                            k++;
                        } else {
                            System.out.print("  ");
                            k++;
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 13!");
            }
        }
    }
}