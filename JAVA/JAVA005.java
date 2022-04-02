/* 05. Program to swap two numbers without using 3rd variable */

import java.util.Scanner;

public class JAVA005 {
    int x, y;

    public static void main(String[] args) {
        JAVA005 obj = new JAVA005();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        obj.x = sc.nextInt();
        obj.y = sc.nextInt();
        sc.close();
        System.out.println("Numbers before swapping:");
        System.out.println("X = " + obj.x + " | Y = " + obj.y);
        swap(obj);
        System.out.println("Numbers after swapping:");
        System.out.println("X = " + obj.x + " | Y = " + obj.y);
    }

    public static void swap(JAVA005 obj) {
        obj.x = obj.x - obj.y;
        obj.y = obj.x + obj.y;
        obj.x = obj.y - obj.x;
    }
}