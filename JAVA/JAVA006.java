/* 06. Program to swap two numbers */

import java.util.Scanner;

public class JAVA006 {
    int x, y;

    public static void main(String[] args) {
        JAVA006 obj = new JAVA006();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        obj.x = sc.nextInt();
        obj.y = sc.nextInt();
        System.out.println("Numbers before swapping:");
        System.out.println("X = " + obj.x + " | Y = " + obj.y);
        swap(obj);
        System.out.println("Numbers after swapping:");
        System.out.println("X = " + obj.x + " | Y = " + obj.y);
        sc.close();
    }

    public static void swap(JAVA006 obj) {
        int temp;
        temp = obj.x;
        obj.x = obj.y;
        obj.y = temp;
    }
}