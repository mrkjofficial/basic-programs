/* 45. Program to calculate factorial of a number with a recursive function */

import java.util.Scanner;

public class JAVA045 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number to calculate its factorial: ");
        n = sc.nextInt();
        sc.close();
        System.out.println("Factorial of " + n + " = " + factorial(n));
    }

    public static long factorial(int n) {
        if (n > 0) {
            return n * factorial(n - 1);
        } else {
            return 1;
        }
    }
}