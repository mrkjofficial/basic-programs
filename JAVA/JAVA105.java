/* 105. Pattern #30

         1
       A   B
     1   2   3
   A   B   C   D
 1   2   3   4   5

*/

import java.util.Scanner;

public class JAVA105 {
    public static void main(String[] args) {
        int n, p;
        boolean k;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 10) {
                for (int i = 1; i <= n; i++) {
                    k = true;
                    p = 1;
                    for (int j = 1; j <= 2 * n - 1; j++) {
                        if (j >= (n + 1) - i && j <= (n - 1) + i && k == true) {
                            if (i % 2 == 0) {
                                System.out.print(" " + (char) (p + 64));
                            } else {
                                System.out.print(" " + p);
                            }
                            p++;
                            k = false;
                        } else {
                            System.out.print("  ");
                            k = true;
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
