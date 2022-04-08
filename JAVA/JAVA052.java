/* 52. Program to calculate sum of squares of first N natural numbers with a recursive function */

import java.util.Scanner;
import static java.lang.Math.pow;

public class JAVA052 {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of N to print the sum of squares of first N natural numbers: ");
        n = sc.nextInt();
        sc.close();
        sum = sumOfSquares(n);
        System.out.println("Sum Of Squares: " + sum);
    }

    public static int sumOfSquares(int n) {
        if (n == 1) {
            return 1;
        }
        return (int) pow(n, 2) + sumOfSquares(n - 1);
    }
}