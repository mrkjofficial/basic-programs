/* 97. Pattern #22

 1
 1 0
 1 0 1
 1 0 1 0
 1 0 1 0 1

*/

import java.util.Scanner;

public class JAVA097 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 51) {
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (j <= i) {
                            if (j % 2 == 1) {
                                System.out.print(" 1");
                            } else {
                                System.out.print(" 0");
                            }
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                sc.close();
                System.exit(0);
            } else {
                System.out.println("Please enter a value from 1 to 50!");
            }
        }
    }
}
