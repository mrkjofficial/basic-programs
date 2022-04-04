/* 43. Program to print 1 + (1+2) + (1+2+3) + … + (1+2+3+…+N) */

import java.util.Scanner;

public class JAVA043 {
    public static void main(String[] args) {
        int n, s = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of N to print 1 + (1+2) + (1+2+3) + … + (1+2+3+…+N): ");
        n = sc.nextInt();
        sc.close();
        for (int i = 1; i <= n; i++) {
            s += sum(i);
        }
        System.out.println("Sum of " + n + " numbers in the series is " + s + "!");
    }

    public static int sum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
}