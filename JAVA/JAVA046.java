/* 46. Program to print fibonacci series of n numbers with a recursive function */

import java.util.Scanner;

public class JAVA046 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of n to print fibonacci series of n numbers: ");
        n = sc.nextInt();
        sc.close();
        System.out.println("Fibonacci Series:");
        for (int i = 1; i <= n; i++) {
            System.out.print("\t" + fibonacci(i));
        }
    }

    public static int fibonacci(int n) {
        if (n == 1 || n == 2) {
            return 1;
        } else {
            return (fibonacci(n - 1) + fibonacci(n - 2));
        }
    }
}
