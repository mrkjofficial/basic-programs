/* 04. Program to swap two numbers */

import java.util.Scanner;

public class JAVA004 {
    int x, y;

    public static void main(String[] args) {
        JAVA004 obj = new JAVA004();
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

    public static void swap(JAVA004 obj) {
        int temp;
        temp = obj.x;
        obj.x = obj.y;
        obj.y = temp;
    }
}