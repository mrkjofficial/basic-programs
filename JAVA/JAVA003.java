/* 03. Program to calculate area of a circle */

import java.util.Scanner;

public class JAVA003 {
    final static double PI = 3.14;

    public static void main(String[] args) {
        int r;
        double a;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius: ");
        r = sc.nextInt();
        sc.close();
        a = PI * (r * r);
        System.out.println("Area = " + a);
    }
}