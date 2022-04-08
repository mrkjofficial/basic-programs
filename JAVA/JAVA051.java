/* 51. Program to calculate sum of squares of digits of a number with a recursive function */

import java.util.Scanner;
import static java.lang.Math.pow;

public class JAVA051 {
    public static void main(String[] args) {
        int num, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        sc.close();
        sum = sumOfDigitSquare(num);
        System.out.println("Sum Of Digit Squares: " + sum);
    }

    public static int sumOfDigitSquare(int num) {
        if (num == 0) {
            return 0;
        }
        int sum = 0;
        sum += pow((num % 10), 2);
        num = num / 10;
        return sum + sumOfDigitSquare(num);
    }
}