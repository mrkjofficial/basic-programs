/* 08. Program to find even/odd number using Bitwise operator */

import java.util.Scanner;

public class JAVA006 {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        if ((num & 1) == 1) {
            System.out.println(num + " is an odd number.");
        } else {
            System.out.println(num + " is an even number.");
        }
        sc.close();
    }
}