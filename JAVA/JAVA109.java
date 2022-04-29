/* 109. Pattern #34

 00
 00 01
 00 02 04
 00 03 06 09
 00 04 08 12 16

*/

import java.util.Scanner;

public class JAVA109 {
    public static void main(String[] args) {
        int k, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 11) {
                for (int i = 1; i <= n; i++) {
                    k = 0;
                    for (int j = 1; j <= n; j++) {
                        if (j <= i) {
                            System.out.print(" " + String.format("%02d", k));
                            k = k + i - 1;
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 10!");
            }
        }
    }
}