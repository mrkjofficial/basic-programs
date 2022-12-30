/* 53. Program to calculate sum of cubes of first N natural numbers with a recursive function */

import java.util.Scanner;
import static java.lang.Math.pow;

public class JAVA053 {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of N to print the sum of cubes of first N natural numbers: ");
        n = sc.nextInt();
        sc.close();
        sum = sumOfCubes(n);
        System.out.println("Sum Of Cubes: " + sum);
    }

    public static int sumOfCubes(int n) {
        if (n == 1) {
            return 1;
        }
        return (int) pow(n, 3) + sumOfCubes(n - 1);
    }
}