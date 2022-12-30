/* 22. Program to calculate factorial of a number */

import java.util.Scanner;

public class JAVA022 {
    public static void main(String[] args) {
        int n, fac = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to find its factorial: ");
        n = sc.nextInt();
        sc.close();
        for (int i = 1; i <= n; i++) {
            fac = fac * i;
        }
        System.out.println("Factorial of " + n + " is " + fac);
    }
}