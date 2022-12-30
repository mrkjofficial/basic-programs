/* 24. Program to calculate sum of first N odd natural numbers */

import java.util.Scanner;

public class JAVA024 {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print sum of first N odd natural numbers: ");
        n = sc.nextInt();
        sc.close();
        for (int i = 0; i < n; i++) {
            sum = sum + 2 * i + 1;
        }
        System.out.println("Sum of first " + n + " odd natural numbers is " + sum);
    }
}