/* 64. Program to transform a string to its uppercase/lowercase */

import java.util.Scanner;

public class JAVA064 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        System.out.println("Upper Case String: " + str.toUpperCase());
        System.out.println("Lower Case String: " + str.toLowerCase());
    }
}