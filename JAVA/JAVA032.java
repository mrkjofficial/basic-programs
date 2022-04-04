/* 32. Program to check whether a given number is prime or not */

import java.util.Scanner;

public class JAVA032 {
    public static void main(String[] args) {
        int num;
        boolean flag = true;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        flag = num == 1 ? false : true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            System.out.println(num + " is a prime number.");
        } else {
            System.out.println(num + " is not a prime number.");
        }
    }
}