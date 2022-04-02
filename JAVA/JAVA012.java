/* 12. Program to check leap year */

import java.util.Scanner;

public class JAVA012 {
    public static void main(String[] args) {
        int year;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a year: ");
        year = sc.nextInt();
        sc.close();
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                System.out.println(year + " is a leap year!");
            } else {
                System.out.println(year + " is not a leap year!");
            }
        } else {
            if (year % 4 == 0) {
                System.out.println(year + " is a leap year!");
            } else {
                System.out.println(year + " is not a leap year!");
            }
        }
    }
}