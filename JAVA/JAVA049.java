/* 49. Program to print first N natural numbers in reverse order with a recursive function */

import java.util.Scanner;

public class JAVA049 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of N to print N numbers in reverse: ");
        n = sc.nextInt();
        sc.close();
        System.out.println("The N numbers are:");
        generateNum(n);
    }

    public static void generateNum(int n) {
        if (n > 0) {
            System.out.print(n + " ");
            generateNum(n - 1);
        }
    }
}