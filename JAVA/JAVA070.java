/* 70. Program to check whether a given string is alphanumeric or not */

import java.util.Scanner;

public class JAVA070 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        if (str.matches("[A-Za-z0-9]+$")) {
            System.out.println("The string is AlphaNumeric!");
        } else {
            System.out.println("The string is not AlphaNumeric!");
        }
    }
}