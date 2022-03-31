/* 07. Program to swap two numbers without using 3rd variable */

import java.util.Scanner;

public class JAVA007 {
    int x, y;

    public static void main(String[] args) {
        JAVA007 obj = new JAVA007();
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

    public static void swap(JAVA007 obj) {
        obj.x = obj.x - obj.y;
        obj.y = obj.x + obj.y;
        obj.x = obj.y - obj.x;
    }
}