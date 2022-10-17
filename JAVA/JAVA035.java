/* 35. Program to print all prime factors of a given number */

import java.util.Scanner;

public class JAVA035 {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        System.out.println("The prime factors are as follows:");
        int i = 2;
        while (num > 1) {
            while (num % i == 0) {
                System.out.print(i + "\t");
                num = num / i;
            }
            i++;
        }
    }
}