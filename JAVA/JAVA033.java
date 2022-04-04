/* 33. Program to print first N prime numbers */

import java.util.Scanner;

public class JAVA033 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of N to print N prime numbers: ");
        n = sc.nextInt();
        sc.close();
        if (n <= 0) {
            System.out.println("Invalid Input!");
        } else {
            printPrime(n);
        }
    }

    public static void printPrime(int n) {
        int num = 2;
        while (n > 0) {
            if (isPrime(num)) {
                System.out.print(num + " ");
                n--;
            }
            num++;
        }
    }

    public static boolean isPrime(int num) {
        boolean flag = true;
        flag = num == 1 ? false : true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = false;
            }
        }
        return flag;
    }
}
