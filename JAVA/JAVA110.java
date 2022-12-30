/* 110. Program to print a Pascal Triangle

             01
          01    01
       01    02    01      
    01    03    03    01   
 01    04    06    04    01

*/

import java.util.Scanner;

public class JAVA110 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows to print a Pascal Triangle: ");
            n = sc.nextInt();
            if (n > 0 && n < 10) {
                pascal(n);
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 9!");
            }
        }
    }

    public static void pascal(int n) {
        int r;
        boolean k;
        for (int i = 1; i <= n; i++) {
            k = true;
            r = 0;
            for (int j = 1; j <= 2 * n - 1; j++) {
                if (j >= n + 1 - i && j <= n - 1 + i && k) {
                    System.out.print(" " + String.format("%02d", combination(i - 1, r)));
                    k = false;
                    r++;
                } else {
                    System.out.print("   ");
                    k = true;
                }
            }
            System.out.println();
        }
    }

    public static int combination(int n, int r) {
        return factorial(n) / (factorial(n - r) * factorial(r));
    }

    public static int factorial(int n) {
        if (n > 0) {
            return n * factorial(n - 1);
        } else {
            return 1;
        }
    }
}