/* 28. Program to reverse a number */

import java.util.Scanner;

public class JAVA028 {
    public static void main(String[] args) {
        int num, rNum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        while (num != 0) {
            rNum = rNum * 10 + (num % 10);
            num = num / 10;
        }
        System.out.println("Reversed Number = " + rNum);
    }
}