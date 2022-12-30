/* 108. Pattern #33

 00
 05 01
 09 06 02
 12 10 07 03
 14 13 11 08 04

*/

import java.util.Scanner;

public class JAVA108 {
    public static void main(String[] args) {
        int k = 0, n, v;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 14) {
                for (int i = 1; i <= n; i++) {
                    v = k;
                    for (int j = 1; j <= i; j++) {
                        System.out.print(" " + String.format("%02d", v));
                        v = v - (n - i + j);
                    }
                    k = k + 1 + n - i;
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