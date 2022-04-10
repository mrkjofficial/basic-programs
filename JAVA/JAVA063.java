/* 63. Program to reverse a string */

import java.util.Scanner;

public class JAVA063 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        StringBuilder sbr = new StringBuilder(str);
        sbr.reverse();
        System.out.println("Reversed String: " + sbr);
    }
}