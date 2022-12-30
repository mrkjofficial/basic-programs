/* 27. Program to calculate sum of the digits of a given number */

import java.util.Scanner;

public class JAVA027 {
    public static void main(String[] args) {
        int num, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        while (num != 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }
        System.out.println("Sum = " + sum);
    }
}