/* 04. Program to print a text at any (X,Y) coordinates of the screen */

import java.util.Scanner;

public class JAVA004 {
    public static void main(String[] args) {
        String s;
        int x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a text to print: ");
        s = sc.nextLine();
        System.out.print("Enter the (X,Y) coordinates to print: ");
        x = sc.nextInt();
        y = sc.nextInt();
        System.out.printf("%c[%d;%df", 0x1B, x, y);
        System.out.print(s);
        sc.close();
    }
}