/* 34. Program to print all prime numbers between two given numbers */

import java.util.Scanner;

public class JAVA034 {
    public static void main(String[] args) {
        int x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a range to print prime numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();
        sc.close();
        System.out.println("The prime numbers are as follows:");
        int ub = x > y ? x : y;
        int lb = x < y ? x : y;
        int j;
        for (int i = lb; i < ub; i++) {
            for (j = 2; j <= i - 1; j++) {
                if (i % j == 0) {
                    break;
                }
            }
            if (i == j) {
                System.out.print(i + "\t");
            }
        }
    }
}