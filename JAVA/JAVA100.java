/* 100. Pattern #25

 A
 B A
 C B A
 D C B A
 E D C B A

*/

import java.util.Scanner;

public class JAVA100 {
    public static void main(String[] args) {
        int k = 0, n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 27) {
                for (int i = 1; i <= n; i++) {
                    k = 64 + i;
                    for (int j = 1; j <= n; j++) {
                        if (j <= i) {
                            System.out.print(" " + (char) k);
                            k--;
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