/* 72. Program to find a substring in a given string */

import java.util.Scanner;

public class JAVA072 {
    public static void main(String[] args) {
        String str = "Lorem ipsum dolor sit amet consectetur adipiscing elit Suspendisse sollicitudin justo sapien sit amet mollis nulla gravida vitae";
        String substring;
        Scanner sc = new Scanner(System.in);
        System.out.println("String:");
        System.out.println(str);
        System.out.print("Enter a String to search: ");
        substring = sc.nextLine();
        sc.close();
        if (str.contains(substring)) {
            System.out.println("String found!");
        } else {
            System.out.println("String not found!");
        }
    }
}
