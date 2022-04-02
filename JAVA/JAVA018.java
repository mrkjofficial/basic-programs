/* 18. Program to print first N odd natural numbers in reverse order */

import java.util.Scanner;

public class JAVA018 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print N odd natural numbers in reverse: ");
        n = sc.nextInt();
        for (int i = n; i > 0; i--) {
            System.out.print(2 * i - 1 + " ");
        }
        sc.close();
    }
}