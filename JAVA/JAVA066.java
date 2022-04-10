/* 66. Program to check whether a string is palindrome or not */

import java.util.Scanner;

public class JAVA066 {
    public static void main(String[] args) {
        String str, revstr;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        StringBuilder sbr = new StringBuilder(str);
        sbr.reverse();
        revstr = sbr.toString();
        if (str.equals(revstr)) {
            System.out.println("It's a palindrome string!");
        } else {
            System.out.println("It's not a palindrome string!");
        }
    }
}