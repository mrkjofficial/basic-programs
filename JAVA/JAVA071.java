/* 71. Program to count vowels in a given string */

import java.util.Scanner;

public class JAVA071 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        System.out.println("Number of Vowels: " + countVowels(str));
    }

    public static int countVowels(String str) {
        int count = 0;
        str = str.toUpperCase();
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == 'A' || str.charAt(i) == 'E' || str.charAt(i) == 'I' || str.charAt(i) == 'O' || str.charAt(i) == 'U') {
                count++;
            }
        }
        return count;
    }
}
