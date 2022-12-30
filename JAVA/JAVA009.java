/* 09. Program to find the greater number among two numbers */

import java.util.Scanner;

public class JAVA009 {
    public static void main(String[] args) {
        int x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();
        sc.close();
        if (x > y) {
            System.out.println(x + " is greater than " + y + ".");
        } else if (x < y) {
            System.out.println(y + " is greater than " + x + ".");
        } else {
            System.out.println(x + " is equal to " + y + ".");
        }
    }
}