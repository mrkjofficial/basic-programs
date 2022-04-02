/* 19. Program to print table of user’s choice */

import java.util.Scanner;

public class JAVA019 {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to print its table: ");
        num = sc.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println(String.format("%02d", num) + " x " + String.format("%02d", i) + " = " + String.format("%02d", num * i));
        }
        sc.close();
    }
}