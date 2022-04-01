/* 10. Program to find the greater number among three numbers */

import java.util.Scanner;

public class JAVA010 {
    public static void main(String[] args) {
        int x, y, z;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        if (x > y) {
            if (x > z) {
                System.out.println(x + " is greatest.");
            } else {
                System.out.println(z + " is greatest.");
            }
        } else if (x < y) {
            if (y > z) {
                System.out.println(y + " is greatest.");
            } else {
                System.out.println(z + " is greatest.");
            }
        } else {
            System.out.println("All three numbers are equal.");
        }
        sc.close();
    }
}