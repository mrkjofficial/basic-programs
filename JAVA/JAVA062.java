/* 62. Program to calculate length of the string */

import java.util.Scanner;

public class JAVA062 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        System.out.println("Length of the String: " + str.length());
    }
}