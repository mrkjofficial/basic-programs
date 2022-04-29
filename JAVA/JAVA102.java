/* 102. Pattern #27

 01
 03 * 02
 04 * 05 * 06
 10 * 09 * 08 * 07
 11 * 12 * 13 * 14 * 15

*/

import java.util.Scanner;

public class JAVA102 {
    public static void main(String[] args) {
        int k, n, t = 0;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 13) {
                for (int i = 1; i <= n; i++) {
                    k = i % 2 == 1 ? t + 1 : t + i;
                    t = t + i;
                    for (int j = 1; j <= 1 + 2 * (i - 1); j++) {
                        if (j % 2 == 1) {
                            System.out.print(" " + String.format("%02d", k));
                            k += i % 2 == 1 ? 1 : -1;
                        } else {
                            System.out.print(" *");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 12!");
            }
        }
    }
}