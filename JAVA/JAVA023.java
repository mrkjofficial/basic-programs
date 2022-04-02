/* 23. Program to calculate sum of first N even natural numbers */

import java.util.Scanner;

public class JAVA023 {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print sum of first N even natural numbers: ");
        n = sc.nextInt();
        sc.close();
        for (int i = 1; i <= n; i++) {
            sum = sum + 2 * i;
        }
        System.out.println("Sum of first " + n + " even natural numbers is " + sum);
    }
}