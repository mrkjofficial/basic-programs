/* 13. Program to print first N natural numbers */

import java.util.Scanner;

public class JAVA013 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print N natural numbers: ");
        n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.print(i + " ");
        }
        sc.close();
    }
}