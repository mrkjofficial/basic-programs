/* 26. Program to count digits of a given number */

import java.util.Scanner;

public class JAVA026 {
    public static void main(String[] args) {
        int digit = 0, num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        while (num != 0) {
            num = num / 10;
            digit++;
        }
        System.out.println("It is a " + digit + "-digit number.");
    }
}