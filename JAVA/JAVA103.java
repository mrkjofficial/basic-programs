/* 103. Pattern #28

         A
       C B
     F E D
   J I H G
 O N M L K

*/

import java.util.Scanner;

public class JAVA103 {
    public static void main(String[] args) {
        int k, n, t = 64;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter the number of rows: ");
            n = sc.nextInt();
            if (n > 0 && n < 7) {
                for (int i = 1; i <= n; i++) {
                    k = t + i;
                    t = t + i;
                    for (int j = 1; j <= n; j++) {
                        if (j >= (n + 1) - i) {
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
                System.out.println("Please enter a value from 1 to 6!");
            }
        }
    }
}
