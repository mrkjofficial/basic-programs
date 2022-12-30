/* 67. Program to count words in a sentence */

import java.util.Scanner;

public class JAVA067 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        String[] strArray = str.split(" ");
        System.out.println("Total Words: " + strArray.length);
    }
}