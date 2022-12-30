/* 89. Pattern #14

 4 3 2 1 0
 3 2 1 0
 2 1 0
 1 0
 0

*/

import java.util.Scanner;

public class JAVA089 {
    public static void main(String[] args) {
        int k, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 11) {
                k = n;
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= k; j++) {
                        System.out.print(" " + (k - j));
                    }
                    System.out.println();
                    k--;
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 10!");
            }
        }
    }
}