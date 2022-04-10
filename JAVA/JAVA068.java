/* 68. Program to reverse a string word wise */

import java.util.Scanner;

public class JAVA068 {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        str = sc.nextLine();
        sc.close();
        String[] strArray = str.split(" ");
        System.out.print("Reversed String (Word Wise): ");
        for (int i = strArray.length - 1; i >= 0; i--) {
            System.out.print(strArray[i] + " ");
        }
    }
}