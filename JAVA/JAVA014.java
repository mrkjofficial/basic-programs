/* 14. Program to print first N natural numbers in reverse order */

import java.util.Scanner;

public class JAVA014 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print N natural numbers in reverse: ");
        n = sc.nextInt();
        sc.close();
        for (int i = n; i > 0; i--) {
            System.out.print(i + " ");
        }
    }
}