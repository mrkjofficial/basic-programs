/* 37. Program to print N co-prime numbers */

import java.util.Scanner;

public class JAVA037 {
    public static void main(String[] args) {
        int y = 2, min, n;
        boolean flag;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to print co-prime numbers: ");
        n = sc.nextInt();
        sc.close();
        System.out.println("The co-prime numbers are as follows:");
        while (true) {
            for (int x = 2; x <= y; x++) {
                flag = true;
                min = x < y ? x : y;
                for (int i = 2; i <= min; i++) {
                    if (x % i == 0 && y % i == 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    System.out.println("(" + x + "," + y + ")");
                    n--;
                    if (n == 0) {
                        System.exit(0);
                    }
                }
            }
            y++;
        }
    }
}