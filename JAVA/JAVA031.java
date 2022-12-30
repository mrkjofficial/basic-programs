/* 31. Program to calculate H.C.F of two numbers */

import java.util.Scanner;

public class JAVA031 {
    public static void main(String[] args) {
        int x, y, i, min;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();
        sc.close();
        min = x < y ? x : y;
        for (i = min; i >= 1; i--) {
            if (x % i == 0 && y % i == 0) {
                break;
            }
        }
        System.out.println("H.C.F = " + i);
    }
}