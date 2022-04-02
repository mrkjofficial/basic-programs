/* 16. Program to print first N odd natural numbers */

import java.util.Scanner;

public class JAVA016 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print N odd natural numbers: ");
        n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.print(2 * i + 1 + " ");
        }
        sc.close();
    }
}