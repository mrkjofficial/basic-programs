/* 11. Program to calculate roots of a quadratic equation */

import java.util.Scanner;

public class JAVA011 {
    public static void main(String[] args) {
        int a, b, c, d;
        double x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the coefficient of x^2, x & constant term: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = (int) Math.pow(b, 2) - 4 * a * c;
        if (d > 0) {
            x = (-b + Math.sqrt(d)) / (2 * a);
            y = (-b - Math.sqrt(d)) / (2 * a);
            System.out.println("Both roots are real & distinct: " + x + ", " + y + ".");
        } else if (d == 0) {
            x = -b / (2.0 * a);
            System.out.println("Both roots are equal: " + x + ".");
        } else {
            System.out.println("Both roots are imaginary.");
        }
        sc.close();
    }
}