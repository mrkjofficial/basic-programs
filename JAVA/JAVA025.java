/* 25. Program to calculate x power y i.e., x^y */

import java.util.Scanner;
import static java.lang.Math.pow;;

public class JAVA025 {
    public static void main(String[] args) {
        int x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        x = sc.nextInt();
        System.out.print("Enter its power: ");
        y = sc.nextInt();
        sc.close();
        System.out.println("Result = " + (int) pow(x, y));
    }
}