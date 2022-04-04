/* 30. Program to calculate L.C.M of two numbers */

import java.util.Scanner;

public class JAVA030 {
    public static void main(String[] args) {
        int x, y, i, max;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();
        sc.close();
        max = x > y ? x : y;
        for (i = max; i <= x * y; i = i + max) {
            if (i % x == 0 && i % y == 0) {
                break;
            }
        }
        System.out.println("L.C.M = " + i);
    }
}