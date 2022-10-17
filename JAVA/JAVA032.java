/* 32. Program to check whether a given number is prime or not */

import java.util.Scanner;
import static java.lang.Math.sqrt;

public class JAVA032 {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        boolean flag = num == 1 ? false : true;
        for (int i = 2; i <= sqrt(num); i++) {
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