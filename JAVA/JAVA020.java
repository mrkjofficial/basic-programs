/* 20. Program to calculate sum of first N natural numbers */

import java.util.Scanner;

public class JAVA020 {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print sum of first N natural numbers: ");
        n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        System.out.println("Sum of first " + n + " natural numbers is " + sum);
        sc.close();
    }
}