/* 50. Program to calculate sum of digits of a number with a recursive function */

import java.util.Scanner;

public class JAVA050 {
    public static void main(String[] args) {
        int num, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        sum = sumOfDigits(num);
        System.out.println("Sum of Digits: " + sum);
    }

    public static int sumOfDigits(int num) {
        if (num == 0) {
            return 0;
        }
        int sum = 0;
        sum += num % 10;
        num = num / 10;
        return sum + sumOfDigits(num);
    }
}
