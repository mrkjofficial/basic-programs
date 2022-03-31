/* 02. Program to add two numbers */

import java.util.Scanner;

public class JAVA002 {
    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println(a + " + " + b + " = " + (a + b));
        sc.close();
    }
}