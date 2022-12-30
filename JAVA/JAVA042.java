/* 42. Program to print first n positive numbers with exactly two bits set (exactly two 1's in Binary Representation) (Logic #2) */

import java.util.Scanner;

public class JAVA042 {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of N to print N positive numbers with two bits set: ");
        n = sc.nextInt();
        sc.close();
        for (int i = 2; n > 0; i *= 2) {
            for (int j = 1; j < i; j *= 2) {
                System.out.print(i + j + "\t");
                n--;
                if (n == 0) {
                    break;
                }
            }
        }
    }
}