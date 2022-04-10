/* 69. Program to remove adjacent duplicate characters from a string */

import java.util.Scanner;

public class JAVA069 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        System.out.println("String with unique adjacent characters: " + remove(str));
    }

    public static String remove(String str) {
        StringBuilder sbr = new StringBuilder(str);
        for (int i = 0; i < sbr.length() - 1; i++) {
            if (sbr.charAt(i) == sbr.charAt(i + 1)) {
                sbr.deleteCharAt(i);
                i--;
            }
        }
        str = sbr.toString();
        return str;
    }
}